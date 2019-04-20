#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

#include "game.h";

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');//初始化布置雷的棋盘 
	InitBoard(show, ROWS, COLS, '*');//初始化打印雷的棋盘 // 为啥初始化 要初始化打印棋盘的 11*11，初始化9*9不就行了
	//DisplayBoard(mine, ROW, COL);				            // 难道是布置雷的时候取9*9????
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL); // 布置雷 只需布置9*9
	DisplayBoard(mine, ROW,COL);
	//DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);// 排查雷




}

void menu()
{
	printf("************************\n");
	printf("******   1. play   *****\n");
	printf("******   0. exit   *****\n");
	printf("************************\n");

}

void test()
{

	int input = 0;// input = 0 可以放在do while 里面吗？ 不行 while()里面的input显示未定义；
	srand((unsigned int)time(NULL));
	do{
		//int input = 0;
		menu();
		printf("请输入->");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			game();//未定义
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);
}


int main()
{
	test();
	
	return 0;
}