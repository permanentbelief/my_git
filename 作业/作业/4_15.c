#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
////unsigned int 
////µ¹ĞòÊä³ö
//unsigned int  reverse_bit(unsigned int value)
//{
//	int a[100] = { 0 };
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 32 ; i++)
//	{
//		a[i] = value % 2;
//		value /= 2;
//
//	}
//	for (i = 0; i <= 31; i++)
//	{
//		//printf("%d", a[i]);
//		sum += a[i] * pow(2 , (31-i));
//		
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int b = 25;
//	//scanf("%d", &b);
//	unsigned int  ret = reverse_bit(b);
//	printf("%u", ret);
//	system("pause");
//}

unsigned int reverse_bit(unsigned int value)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i < 32; i++)  // 0101
	{
		value %= 2;              // 010  1
		sum += value*pow(2, 31-i); //       1*2^0 
		value /= 2;
	}
	return sum;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	unsigned int  ret = reverse_bit(a);
	printf("%u", ret);
	system("pause");
}
