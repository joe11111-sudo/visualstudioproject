#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
using namespace sf;

const int ROW_COUNT = 20;
const int COL_COUNT = 10;

const float SPEED_NORMAL = 0.3;
const float SPEED_QUICK = 0.05;

int table[ROW_COUNT][COL_COUNT] = { 0 };

struct Point {
    int x, y;
} curBlock[4], BakBlock[4];

int blocks[7][4] = {
    1,3,5,7, // I
    2,4,5,7, // Z 1
    3,5,4,6, // Z 2
    3,5,4,7, // T
    2,3,5,7, // L
    3,5,7,6, // J
    2,3,4,5, // 
};

int blockIndex;
float delay = SPEED_NORMAL;

sf::Sound sou;

// ��ʾ����
Font font;
Text textScore;
int score = 0;


bool check()
{
    for (int i = 0; i < 4; i++)
        if (curBlock[i].x < 0 || curBlock[i].x >= COL_COUNT || curBlock[i].y >= ROW_COUNT || curBlock[i].y <= 0
            || table[curBlock[i].y][curBlock[i].x]) {
            return 0;
        }
    return 1;
};

void doRotate(void) {
    if (blockIndex == 7) {  // �����Σ�����Ҫ��ת
        return;
    }

    for (int i = 0; i < 4; i++) {
        BakBlock[i] = curBlock[i];  //���ݵ�ǰ����
    }

    Point p = curBlock[1]; //center of rotation
    for (int i = 0; i < 4; i++)
    {
        struct Point tmp = curBlock[i];
        curBlock[i].x = p.x - tmp.y + p.y;
        curBlock[i].y = p.y + tmp.x - p.x;
    }
    if (!check()) {
        for (int i = 0; i < 4; i++) {
            curBlock[i] = BakBlock[i];
        }
    }
}

void moveLeftRight(int offeset) {
    for (int i = 0; i < 4; i++) {
        BakBlock[i] = curBlock[i];  //���ݵ�ǰ����
        curBlock[i].x += offeset;   //���µ�ǰ����
    }

    if (!check()) {
        // �ѵ�ǰ���黹ԭ�����ݷ���
        for (int i = 0; i < 4; i++) {
            curBlock[i] = BakBlock[i];
        }
    }
}

void keyEvent(RenderWindow* window) {
    Event e;
    int dx = 0;
    bool rotate = false;

    // pollEvent ���¼�������ȡ��һ���¼�
    while (window->pollEvent(e))
    {
        if (e.type == Event::Closed)
            window->close();

        if (e.type == Event::KeyPressed) {
            switch (e.key.code) {
            case Keyboard::Up:
                rotate = true;
                break;
            case Keyboard::Left:
                dx = -1;
                break;
            case Keyboard::Right:
                dx = 1;
                break;
            default:
                break;
            }
        }
    }
    // �����¼�������½�
    if (Keyboard::isKeyPressed(Keyboard::Down)) {
        delay = SPEED_QUICK;
    }

    if (dx != 0) {
        moveLeftRight(dx);
    }

    //////Rotate//////
    if (rotate) {
        doRotate();
    }
}

void newBlock() {
    blockIndex = 1 + rand() % 7; // 1..7
    int n = blockIndex - 1;//rand() % 7;
    for (int i = 0; i < 4; i++)
    {
        curBlock[i].x = blocks[n][i] % 2;
        curBlock[i].y = blocks[n][i] / 2;
    }
}

void clearLine() {
    /////check lines//////////
    int k = ROW_COUNT - 1;
    for (int i = ROW_COUNT - 1; i > 0; i--)
    {
        int count = 0;
        for (int j = 0; j < COL_COUNT; j++)
        {
            if (table[i][j]) count++;

            table[k][j] = table[i][j];
        }

        // ���û������,�ͼ���ɨ����һ��
        // ����Ѿ�����,k����,�����������,�����һ�ε�ɨ����
        if (count < COL_COUNT) k--;
        else {
            score += 10;
            sou.play();
        }
    }

    char tmp[16];
    sprintf_s(tmp, "%d", score);
    textScore.setString(tmp);
}

void drawBlocks(RenderWindow* window, Sprite* spriteBlock) {
    // �����ѽ�����ϵķ���
    for (int i = 0; i < ROW_COUNT; i++)
        for (int j = 0; j < COL_COUNT; j++)
        {
            if (table[i][j] == 0) continue;
            spriteBlock->setTextureRect(IntRect(table[i][j] * 18, 0, 18, 18));
            spriteBlock->setPosition(j * 18, i * 18);
            spriteBlock->move(28, 31); //offset
            window->draw(*spriteBlock);
        }

    // ���Ƶ�ǰ����
    for (int i = 0; i < 4; i++)
    {
        spriteBlock->setTextureRect(IntRect(blockIndex * 18, 0, 18, 18));
        spriteBlock->setPosition(curBlock[i].x * 18, curBlock[i].y * 18);
        spriteBlock->move(28, 31); //offset
        window->draw(*spriteBlock);
    }
}

void drop() {
    for (int i = 0; i < 4; i++) {
        BakBlock[i] = curBlock[i];
        curBlock[i].y += 1;
    }

    if (!check()) {
        for (int i = 0; i < 4; i++) {
            // ���ñ�ǣ����̻�����Ӧλ��
            table[BakBlock[i].y][BakBlock[i].x] = blockIndex;
        }
        newBlock();
    }
}

void initScore() {
    if (!font.loadFromFile("Sansation.ttf")) {
        exit(1);
    }

    textScore.setFont(font); // font is a sf::Font
    textScore.setCharacterSize(30);// set the character size
    textScore.setFillColor(sf::Color::White); // set the color
    textScore.setStyle(sf::Text::Bold); // set the text style
    textScore.setPosition(255, 175);
    textScore.setString("0");
}

int main()
{
    // ���ű�������
    sf::Music music;
    if (!music.openFromFile("bg.wav"))
        return -1; // error
    music.setLoop(true);
    music.play();

    // ������Ч
    sf::SoundBuffer xiaochu;
    if (!xiaochu.loadFromFile("xiaochu.wav")) {
        return -1;
    }

    // �����������
    sou.setBuffer(xiaochu);
    //sou.play(); // ������Ƶ

    srand(time(0));

    // ��������
    RenderWindow window(
        VideoMode(320, 416),   //����ģʽ
        "Rock");   //����

    // ������ʾͼƬ�ľ���
    Texture t1, t2, t3;
    t1.loadFromFile("image/tiles.png");
    t2.loadFromFile("image/bg2.jpg");
    t3.loadFromFile("image/frame.png");
    Sprite spriteBlock(t1);
    Sprite spriteBg(t2);
    Sprite spriteFrame(t3);

    initScore();

    // ��������ʱ��
    float timer = 0; //delay = 0.3;

    // ��ʱ��
    Clock clock;

    newBlock(); // ���ɵ�һ������

    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asSeconds();
        clock.restart(); //��ʱ�������ʱ
        timer += time;

        keyEvent(&window);

        if (timer > delay) {
            drop(); 
            timer = 0;
        }

        clearLine(); // �������

        delay = SPEED_NORMAL;

        /////////draw//////////
        window.clear(Color::White);
        window.draw(spriteBg);
        drawBlocks(&window, &spriteBlock);
        window.draw(spriteFrame);
        window.draw(textScore); //��ʾ����

        window.display();
    }

    return 0;
}
