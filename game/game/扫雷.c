#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("*************************\n");
	printf("******1    play     *****\n");
	printf("******0    exit     *****\n");
	printf("*************************\n");

}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard( mine , ROWS, COLS,  '0');
	InitBoard(  show, ROWS, COLS, '*');
	
	//displaymessage(show, ROW, COL);
	
	Setmine(mine, ROW, COL);
    displaymessage(mine, ROW, COL);
	Findmine(mine, show, ROW, COL);
	
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	
	do{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default :
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);
}



int main()
{

	test();
	system("pause");
	return 0;

}