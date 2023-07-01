#include <SFML/Graphics.hpp>//图像处理头文件
#include <SFML/Audio.hpp>//声音头文件
#include <time.h>
using namespace sf;//命名空间
//开发步骤
//1.bulid sfml-enviroment
//2.create keyfunction
//3.create cudes
const int ROW_COUNT = 20;
const int COL_COUNT = 10;

const float SPEED_NORMAL = 0.3;
const float SPEED_QUICK = 0.05;
//table[i][j]==0 表示有方块，是空白
//table[i][j]==1 表示有方块，第一种方块使用第一种颜色
int table[ROW_COUNT][COL_COUNT] = { 0 };//Static_area of tetris gameplay

//struct Point a;
//a.x
//a.y
//struct Point *p =&a;
//p->x;
//p->y;
struct Point {
    int x, y;
} curBlock[4], BakBlock[4];

/*
__ __
|0|1|	block "I"={1,3,5,7}
|_|_|	block  type1 of"Z"={2,4,5,7}
|2|3|	block  type2 of"Z"={3,5,4,6}
|_|_|	block  "T"={3,5,4,7}
|4|5|   block  "L"={2,3,5,7}
|_|_|	block  "J"={3,5,7,6}
|6|7|	block  "田"={2,3,4,5)
|_|_|

*/
//type of tetris cude
int blocks[7][4] = {    //[7]=7 types of blocks ;[4]=4 digit arrays
    1,3,5,7,	//I	
    2,4,5,7,	//z
    3,5,4,6,	//z
    3,5,4,7,	//T
    2,3,5,7,	//L
    3,5,7,6,	//J
    2,3,4,5,	//田

};

int blockIndex;     //current type of block 
float delay = SPEED_NORMAL; 	//表示下降速度
//初始化音效
sf::Sound sou;

Font font;
Text textScore;
int score = 0;

//检测当前方块合理性
bool check()
{
    for (int i = 0; i < 4; i++)
        if (curBlock[i].x < 0 || curBlock[i].x >= COL_COUNT
            || curBlock[i].y >= ROW_COUNT ||
            curBlock[i].y <= 0
            || table[curBlock[i].y][curBlock[i].x]) {       /*说明有方块*/
            return 0;
        }
    return 1;
};
/*平面，点（x,y)绕任意点（dx,dy)顺时针旋转a度后的坐标
xx(x-dx)*cos(-a)-(y-dy)*sin(-a)+dx;
yy=(x-dx)*sin(-a)+(y-dy)*cos(-a)+dy;

//平面，点（x,y)绕任意点（dx,dy）逆时针旋转a度后的坐标
xx(x-dx)*cos(a)-(y-dy)*sin(a)+dx;
yy=(x-dx)*sin(a)+(y-dy)*cos(a)+dy;
*/

void doRotate(void) {
    if (blockIndex == 7) {   //田子方块不转
        return;
    }
    //先备份
    for (int i = 0; i < 4; i++) {
        BakBlock[i] = curBlock[i];
    }

    Point p = curBlock[1]; //旋转中心
        /*
        x坐标计算：p.x-a[i].y+p,y
        y坐标计算：a[i].x-p.x+p.y

    */
    for (int i = 0; i < 4; i++)
    {
        struct Point tmp = curBlock[i];
        curBlock[i].x = p.x - tmp.y + p.y;
        curBlock[i].y = p.y + tmp.x - p.x;
    }
    // 检测合法性
    if (!check()) {
        for (int i = 0; i < 4; i++) {
            curBlock[i] = BakBlock[i];
        }
    }
}
void moveLeftRight(int offeset) {
    for (int i = 0; i < 4; i++) {
        BakBlock[i] = curBlock[i];
        curBlock[i].x += offeset;
    }

    if (!check()) {

        for (int i = 0; i < 4; i++) {
            curBlock[i] = BakBlock[i];
        }
    }
}
//keyfunction
void keyEvent(RenderWindow* window) {
    Event e;//事件变量
    int dx = 0;
    bool rotate = false;//	表示是否旋转

   //pollEvent 从事件队列中获取一个事件
    //如果没有事件了，就返回false
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
    //处理下降
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
    //get random block
    blockIndex = 1 + rand() % 7; // 1..7
    int n = blockIndex - 1;//rand() % 7;
     //序号 %2  x坐标
     //序号 /2  y坐标
    for (int i = 0; i < 4; i++)
    {
        curBlock[i].x = blocks[n][i] % 2;
        curBlock[i].y = blocks[n][i] / 2;
    }
}
//消除一行
void clearLine() {
    //重写方块的行数
    int k = ROW_COUNT - 1;
    //由下到上扫描
    for (int i = ROW_COUNT - 1; i > 0; i--)
    {
        int count = 0;
        for (int j = 0; j < COL_COUNT; j++)
        {
            if (table[i][j]) count++;

            table[k][j] = table[i][j];
        }


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
    //1.已经降到底部的方块
    for (int i = 0; i < ROW_COUNT; i++)
        for (int j = 0; j < COL_COUNT; j++)
        {
            if (table[i][j] == 0) continue;
            //画小方块
          //需要使用Sprite表示图片
            spriteBlock->setTextureRect(IntRect(table[i][j] * 18, 0, 18, 18));
            spriteBlock->setPosition(j * 18, i * 18);
            //设置初始偏移量
            spriteBlock->move(28, 31); //offset
            //绘制
            window->draw(*spriteBlock);
        }

    //2.正在降落过程中的方块（当前方块）
    for (int i = 0; i < 4; i++)
    {
        spriteBlock->setTextureRect(IntRect(blockIndex * 18, 0, 18, 18));
        spriteBlock->setPosition(curBlock[i].x * 18, curBlock[i].y * 18);
        //设置初始偏移量
        spriteBlock->move(28, 31); //offset
        //绘制
        window->draw(*spriteBlock);
    }
}


void drop() {
    //方块下降 y坐标移动
    for (int i = 0; i < 4; i++) {
        BakBlock[i] = curBlock[i]; //拷贝
        curBlock[i].y += 1;
    }

    if (!check()) {
        //固定方块到底了
        for (int i = 0; i < 4; i++) {
            table[BakBlock[i].y][BakBlock[i].x] = blockIndex;
        }
        //产生新方块
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
//1.创建游戏窗口
int main()
{
    //背景音乐
    sf::Music music;
    if (!music.openFromFile("bg.wav"))
        return -1; // error
    music.setLoop(true);
    music.play();

    //音效
    sf::SoundBuffer xiaochu;
    if (!xiaochu.loadFromFile("xiaochu.wav")) {
        return -1;
    }


    sou.setBuffer(xiaochu);


    srand(time(0));//随机生成

   //1.1准备窗口背景图片
    RenderWindow window(
        VideoMode(320, 416),   //定义窗口size
        "Rock");  //窗口标题

    //2.add background picture
    Texture t1;//2.1 add blocks image
    Texture t2;//2.add background picture
    Texture t3;//2.1 add blocks image
    t1.loadFromFile("image/tiles.png");
    t2.loadFromFile("image/bg2.jpg");//add picture into Buffer memory
    t3.loadFromFile("image/frame.png"); //, sf::IntRect(57, 121, 741, 647)
    Sprite spriteBlock(t1);
    Sprite spriteBg(t2);    //load image
    Sprite spriteFrame(t3);

    initScore();


    float timer = 0; //delay = 0.3;

    //计时器clock
    Clock clock;

    newBlock(); //create new block

    //enter gamemode
    while (window.isOpen())
    {
        //获取从clock被启动到现在的时间
        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer += time;

        //等待用户按下按键
        keyEvent(&window);

        if (timer > delay) {
            //降落
            drop(); //下降一位位置
            timer = 0;//计时器清零
        }

        clearLine(); //消除一行

        delay = SPEED_NORMAL;

        //绘制游戏
        window.clear(Color::White);
        window.draw(spriteBg);
        drawBlocks(&window, &spriteBlock);//绘制方块
        window.draw(spriteFrame);
        window.draw(textScore);

        //刷新并且显示窗口
        window.display();
    }

    return 0;
}
