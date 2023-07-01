/*
1.数据分析：基本数据成员分析
2.过程分析：函数分析
3，主函数
*/

/*****************************************
蛇属性		有坐标（所以我们要有坐标去做属性）
食物属性		有坐标
坐标属性
******************************************/

#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>		//报错，需装图形插件
#include<conio.h>
//坐标属性
typedef struct pointXY {
	int x;
	int y;

}MYPOINT;

//蛇属性
struct Snake{
	int num;	//蛇的节数
	MYPOINT xy[100];	//蛇最多有100节
	char position;		//方向
}snake;

//食物的属性
struct Food {
	MYPOINT FDXY;	//食物x和y坐标
	int eatgrade;	//吃了食物有多少分
	int flag;		//食物是否存在
}food;

HWND hwnd = NULL;	//表示主窗口


//把方向枚举出来
//小键盘，键码值
enum movPosition{right=72,left=75,down=77,up=80};
/*****************************************
初始化蛇	initsnake
画蛇		drawsnake
移动蛇	movesnake
按键处理		keydown
初始化食物	initfood
画食物		drawFood
蛇什么时候死掉  snakeDie
******************************************/
void initSnake();
void drawSnake();
void keyDown();
void initFood();
void drawFood();
void eatFood();
void snakeDie();

int main() {
	hwnd = initgraph(640, 480);
	setbkcolor(WHITE);
	cleardevice();		//如果没有颜色 刷新一下
	initSnake();
	
	while (1) {
		cleardevice();
		drawSnake();
		moveSnake();
		Sleep(50);
	}



	getchar();	//防止闪屏
	closegrap();
	return 0;
}


void initSnake() {
	//把前三节属性写出来--》初始化数据过程
	snake.xy[2].x = 0;
	snake.xy[2].y = 0;
	
	snake.xy[1].x = 10;
	snake.xy[1].y = 0;
	
	snake.xy[0].x = 20;
	snake.xy[0].y = 0;

	snake.num = 3;
	snake.position = right;	//初始化方向右边

}

void drawSnake() {
	for (int i = 0; i < snake.num;i++) {
		setlinecolor(BLACK);	//矩形边框的颜色为黑色
		setfillcolor(GREEN);	
		//画矩形
		fillrectangle(snake.xy[i].x, snake.xy[i].y, snake.xy[i].x + 10, snake.xy[i].y + 10);
	}

}

void moveSnake() {
	//除了第一节，后面每一节，都是前面一节的坐标
	for (int i = snake.num - 1;i > 0;i--) {
		snake.xy[i].x = snake.xy[i - 1].x;
	}
	//第一节处理
	switch (snake.position) {
	case right:
		snake.xy[0].x += 10;
		break;

	case left:
		snake.xy[0].x -= 10;
		break;

	case up:
		snake.xy[0].y += 10;
		break;

	case down:
		snake.xy[0].y -= 10;
		break;

	default:
		break;
	}
}

void KeyDown() {
	char userKey
}