#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

#include "game.h";

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');//��ʼ�������׵����� 
	InitBoard(show, ROWS, COLS, '*');//��ʼ����ӡ�׵����� // Ϊɶ��ʼ�� Ҫ��ʼ����ӡ���̵� 11*11����ʼ��9*9��������
	//DisplayBoard(mine, ROW, COL);				            // �ѵ��ǲ����׵�ʱ��ȡ9*9????
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL); // ������ ֻ�貼��9*9
	DisplayBoard(mine, ROW,COL);
	//DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);// �Ų���




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

	int input = 0;// input = 0 ���Է���do while ������ ���� while()�����input��ʾδ���壻
	srand((unsigned int)time(NULL));
	do{
		//int input = 0;
		menu();
		printf("������->");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			game();//δ����
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input);
}


int main()
{
	test();
	
	return 0;
}