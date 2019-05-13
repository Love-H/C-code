### 贪吃蛇

/*
	1.数据设计
	2.模块化设访
	3.实现过程
	注：最重要的是数据设计和模块化设计
------------------------------------------- 
	1. 画地图
		- 窗体
		- 食物、蛇的模型 
	2. 食物的产生
		- 随机出现
			- 不可超过边界 
			- 不可在蛇身上			 
		-  
	3. 蛇的动作 
	4. 蛇的状态
	5. 光标的移动 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h> //食物随机
#include <conio.h> //按键监控

 


//定义地图大小，蛇的长度 
#define MAPWIDTH 60
#define MAPHEIGHT 25
#define SNAKESIZE 50

void drawMap();
void gotoxy(int x, int y);
void keyDown();
int snakeStatus();
void createFood();

//数据设计 

/*想想为何标准答案是
struct
{
	//记录每一节蛇的坐标 
	int x[SNAKESIZE];
	int y[SNAKESIZE];
	int len;
	int speed;

}snake;
*/ 

// 蛇的结构体 
struct {
	// 记录每一节蛇的位置 
	int x[SNAKESIZE];
	int y[SNAKESIZE];
	int len;	// 蛇的长度 
	int speed;	// 蛇的速度 
	
}snake;


/*易漏  全局变量*/
int key = 'w'; //初始化移动方吿
int changeFlag = 0;//蛇的变化标记

struct {
	int x;
	int y;
}food;

//模块化设访-->功能的划分-->抽象到函数
/*怎么抽象：具体了解业务逻辑*/

// 1. 画地图 
void drawMap()
{
	// ■:蛇身  ⊙:食物 
	srand((unsigned int)time(NULL)); // 生成随机数
	
	// 1. 画边框 
	// 1.1 上下边框
	for (int i = 0; i < MAPWIDTH; i += 2) {
		gotoxy(i, 0);
		printf("■");
		gotoxy(i, MAPHEIGHT-1);
		printf("■");
	}
	// 1.2 左右边框
	for (int i = 0; i < MAPHEIGHT; i++) {
		gotoxy(0, i);
		printf("■");
		gotoxy(MAPWIDTH-2, i);
		printf("■");
	}
	
	// 2. 画蛇
	// 2.1 蛇的属性
	snake.len = 3;	
	snake.speed = 200;
	snake.x[0] = MAPWIDTH / 2;
	snake.y[0] = MAPHEIGHT / 2;
	
	// 2.2 画蛇头
	gotoxy(MAPWIDTH / 2, MAPHEIGHT / 2);
	printf("■");
	// 2.3 画蛇身
	for (int k = 1; k < snake.len; k++) {
		snake.x[k] = snake.x[k-1] + 2;
		snake.y[k] = snake.y[k-1];
		gotoxy(snake.x[k], snake.y[k]);
		printf("■");
	}
	
	// 3. 画食物	
/*	
	food.x = rand() % (MAPWIDTH - 4) + 2;
	food.y = rand() % (MAPHEIGHT - 2) + 1;
	想想为什么下面的 while 循环就能让蛇的长度增加，而单凭这两行却不能？ 
*/
	while (1)	 
	{
		food.x = rand() % (MAPWIDTH - 4) + 2;
		food.y = rand() % (MAPHEIGHT - 2) + 1;
		if (food.x % 2 == 0) // 为什么加上这行，蛇的长度才会增加？ 
		{
			break;
		}
	}
	
	gotoxy(food.x, food.y);
	printf("⊙");
	
}
	 
// 2.食物的产生
void createFood() {
	//蛇把食物吃了 
	int flag = 1;
	if (food.x == snake.x[0] && food.y == snake.y[0]) {
			srand((unsigned int)time(NULL)); // 生成随机数
		
		while (1) {
			food.x = rand() % (MAPWIDTH - 4) + 2;
			food.y = rand() % (MAPHEIGHT - 2) + 1;
			
			// 2.1 食物不能产生在蛇身上
			for (int i = 0; i < snake.len; i++) {
			 
/*			
			为何不用下列方式限制食物的产生位置
			if (food.x != snake.x[i] || food.y != snake.y[i]);
				flag = 1;
			
			因为如果按照上面的判断条件，只能判断在某一节身体之前没有产生食物，
		    不代表之后身体的位置没有产生食物！				
*/
				if (food.x == snake.x[i] && food.y == snake.y[i]) {
					flag = 0;
					break;
				}
			} 
				
			if (flag && food.x % 2 == 0)
				break;
			
		} 
		
		gotoxy(food.x, food.y);
		printf("⊙");
		snake.len++;
		changeFlag = 1;//蛇的标记昿
	}
		
}

// 3. 按键操作
void keyDown()
{
	// 无按键的处理
	if ( kbhit() ) {
		//有按键接受
		fflush(stdin); // 清空输入缓冲区，通常是为了确保不影响后面的数据读取（例如在读完一个字符串后紧接着又要读取一个字符，此时应该先执行fflush(stdin);）
		key = getch(); 
	} 
	
	// 擦除蛇尾
	if ( !changeFlag )
	{
		gotoxy(snake.x[snake.len - 1], snake.y[snake.len - 1]);
		printf("  ");
	}
	
	// 后面的蛇身
	for (int i = snake.len - 1; i > 0; i--) {
		snake.x[i] = snake.x[i-1];
		snake.y[i] = snake.y[i-1];
	} 
	
	// 控制方向
	switch (key) {
		case 'w':
		case 'W':
			snake.y[0]--;	//切记，左上角为坐标轴(0 , 0) 
			break;
		case 's':
		case 'S':
			snake.y[0]++;
			break;
		case 'a':
		case 'A':
			snake.x[0] -= 2;
			break;
		case 'd':
		case 'D':
			snake.x[0] += 2;
			break;	
	}
	
	gotoxy(snake.x[0], snake.y[0]);
	printf("■");
	changeFlag = 0;	// 使 擦除蛇尾的部分 运行 
	gotoxy(MAPHEIGHT + 2, 0);  //移动不能一直看着光标
}

// 4. 判断蛇的状态是否结束游戏
int snakeStatus() {
	// 碰到边框， 
/*	
	为什么有了限制，蛇依旧会穿墙？ 
	if (snake.x[0] == 0 && snake.x[0] == MAPWIDTH && snake.y[0] == 0 && snake.y[0] == MAPHEIGHT)
*/	
	
	if (snake.x[0] == 2 || snake.x[0] == MAPWIDTH - 2 || snake.y[0] == 0 || snake.y[0] == MAPHEIGHT - 1) {
		return 0;
	}
	// 碰到自己身体 
	for (int j = 1; j < snake.len; j++) {
		if (snake.x[0] == snake.x[j] && snake.y[0] == snake.y[j])
		return 0;
	} 
	
	return 1;
} 	 

// 5. 辅助函数：光标移动 
void gotoxy(int x, int y)
{
	//调用win32 API 去设置控制台的光标位罿
	//1.找到控制台的这个窗口
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	//2.光标的结构体                                                                                                                                                                                                 
	COORD coord;
	//
	//3.设置坐标
	coord.X = x;
	coord.Y = y;
	//4.同步到控制台
	SetConsoleCursorPosition(handle, coord);
} 

int main()
{
	drawMap();
	
	while (1) {
		createFood();
		Sleep(snake.speed);
		keyDown();
		
		if (!snakeStatus())
		{
			break;
		}
			
	}
	
	gotoxy(MAPWIDTH/ 2, MAPHEIGHT / 2);
	printf("Game over");

	system("pause");
	return 0;
}


 
















