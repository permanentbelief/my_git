#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//15
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 6 - i; j++)
//		{
//			printf("%c", ' ');
//		}
//		for (j = 6-i; j <= 10-i; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	
//	
//	system("pause");
//
//}
//14
//int main()
//{
//	
//	double h = 100; // 100 50 50 25 25        
//	double sum = h;
//	for (int i = 1; i <= 9; i++)
//	{
//		if (i == 9)
//		{
//			sum += h / 2;
//		}
//		sum += h ;
//		h = h / 2;
//		
//	}
//	printf("%.2lf", sum);
//	system("pause");
//}
//13
//int main()
//{
//	printf("请输入一个数\n");
//	int count = 0;
//	int number = 0;
//	scanf("%d", &number); // 101 10 1
//	int temp = number;
//	while (number)
//	{
//		number /= 10;
//		count++;
//	}
//	printf("%d的位数是%d\n", temp, count);
//	int tmp = number;
//
//	while (number)
//	{
//		printf("%d", number % 10);
//		number /= 10;
//	}
//	system("pause");
//}
//18
int main()
{
	int sum = 0;
	int count = 1;
	for (int i = 1; i <= 10; i++)
	{
		count *= i;
		sum += count;
	}
	printf("%d", sum);
	system("pause");
}