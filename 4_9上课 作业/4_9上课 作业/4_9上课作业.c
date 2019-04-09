#define _CRT_SECURE_NO_WARNINGS 1 
/*写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
程序原型：
int count_one_bits(unsigned int value)
{
	// 返回 1的位数 
}*/
// 我的方法
//#include <stdio.h>
//int count_one_bits(unsigned int value) // 0000 1111
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)                 //0000 0001
//	{
//
//		if ((value%2) & 1 == 1)
//		{
//			count++;
//		}
//	 value =	value >> 1;
//	}
//	return count;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_bits(n);
//	printf("%d", ret);
//	system("pause");
//}
// 方法二
//#include <stdio.h>
//int count_one_bits(unsigned int value) // 0000 1111
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)                 //0000 0001
//	{  // 判断第一位是奇数是偶数
//	   //  奇数的第一位肯定为1
//		if (value % 2 == 1)   
//		{
//			count++;
//		}
//		value /= 2;// 向前进一位；
//	}
//	return count;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_bits(n);
//	printf("%d", ret);
//	system("pause");
//}
//方法三
//#include <stdio.h>
//int count_one_bits(unsigned int value) // 0000 1111
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)                 //0000 0001
//	{  
//	   
//		if ((value >> i) & 1 == 1)    
//		{
//			count++;
//		}
//		
//	}
//	return count;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_bits(n);
//	printf("%d", ret);
//	system("pause");
//}
//位上奇数偶数和
//#include <stdio.h> // 0 01 10 11 100 101
//int main()
//{
//	int i = 0;
//	int val = 5;
//	int sum1 = 0;
//	int sum2 = 0;
//	int ret = 0;
//	ret = val;
//	/*for (i = 1; i <= 32; i++)
//	{
//
//		if (i % 2 == 0)
//		{
//			sum1 += (val >> (i-1)) & 1;
//		}
//		else
//		{
//			sum2 += (val >> (i-1)) & 1;
//		}
//	}
//	printf("%d\n", sum1);
//	printf("%d", sum2);*/
//	//二进制倒序输出
//	for (i = 0; i < 32; i++)
//	{
//		val = ret;
//		val % 2;        // 1 0 1
//		ret /= 2;       //val = 2 1
//		printf("%d", val%2);
//	}
//	system("pause");
//}
// 输出一个数的二进制
#include <stdio.h>
int main()
{
	int val = 5; //0000 0101
	for (int i = 0; i < 32; i++)
	{
		val = val / 2;
		
	}
	printf("%d", val);
	system("pause");
}