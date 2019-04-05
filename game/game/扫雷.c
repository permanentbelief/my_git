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
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default :
			printf("�����������������");
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