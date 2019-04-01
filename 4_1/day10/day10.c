#define _CRT_SECURE_NO_WARNINGS 1
/*写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
程序原型：
int count_one_bits(unsigned int value)
{
	// 返回 1的位数 
}*/
//#include <stdio.h>
//#include <stdlib.h>
//int count_one_bits(unsigned int value)// 00000000000000000000000000001111 // 15
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if(value%2== 1)
//		{
//			count++;
//		}
//		value = value >> 1;
//	}
//	return count;
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = count_one_bits(a);
//	printf("%d",ret);
//	system("pause");
//}
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//#include <stdio.h>
//#include <stdlib.h>
//int sum_even_bits(unsigned int value)
//{
//	int i = 0;
//	int sum = 0;
//	while (i < 16)
//	{
//		if (value % 2 == 1)
//		{
//			sum++;
//		}
//		if (value % 2 == 0)
//		{
//			;
//		}
//		value = value >> 2;
//		i++;
//	}
//	return sum;
//	
//	
//}
//int sum_odd_bits(unsigned int value) //偶数     //0000 0000 0000 0000 0000 0000 0000 1111 
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i < 32; i+=2)
//	{
//		if (value % 2 == 1)
//		{
//			sum++;
//		}
//		value = value >> 2;
//	}
//	return sum;
//}
//void display(int a)
//{
//	for (int i = 0; i < 32; i++)
//	{
//		if (a % 2 == 0){
//			printf("%d", a % 2);
//		}
//			a >> 1;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum_odd = sum_odd_bits(a);
//	int sum_even = sum_even_bits(a);
//	printf("二进制中奇数位的和为%d\n",sum_even);//偶数
//	printf("二进制中偶数位的和为%d\n", sum_odd);//奇数
//	display(a);
//	system("pause");
//}
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int  i = 0;
//	int count = 0;
//	int r1 = a % 2;
//	int r2 = b % 2;
//	for (i = 0; i < 32; i++)
//	{
//		
//		if ((r1&r2) == 0)
//		{
//			count++;
//		}
//	 r1 = r1 >> 1;
//	 r2 =  r2 >> 1;
//
//	}
//	printf("%d", count);
//	system("pause");
//	
//异或操作符
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 1;     //000000000000000000000000001
//	int b = -1;	   //100000000000000000000000001
//	int c = a^b;   //111111111111111111111111110
//	printf("%d", c);//
//	system("pause");
//}
//}
//#include <stdio.h>
//#include <stdlib.h>
//void seperate(int a)
//{
//	while (a > 9)						// 256	
//	{									// 25	
//		seperate(a / 10);
//		a = a % 10;
//		
//	}
//	printf("%d ",a);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	seperate(a);
//	system("pause");
//
//}
