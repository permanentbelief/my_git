#define _CRT_SECURE_NO_WARNINGS 1
//判断是否为素数
//#include <stdio.h>
//#include <stdlib.h>
//int is_leap_year(int n)
//{
//
//	int  i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			break;
//		}
//	}
//	if (i == n)
//	{
//		return 1;
//	}
//	return 0;
//	
//
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = is_leap_year(a);
//	if (ret==1)
//	{
//		printf("%d是素数",a);
//	}
//	else{
//		printf("%d不是素数", a);
//	}
//	system("pause");
//}
//递归求斐波那契数列
//#include <stdio.h>
//#include <stdlib.h>
//int fn(int a)
//{
//	if (a == 1 || a == 2)
//		return 1;
//	return fn(a - 1) + fn(a - 2); 
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = fn(i);
//	printf("%d", ret);
//	system("pause");
//}
// 非递归高效斐波那契数列
//#include <stdio.h>
//int fn(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//
//}
//int main()
//{
//	int s = 0;
//	scanf("%d", &s);
//	printf("%d", fn(s));
//	system("pause");
//}
// 数组求斐波那契数列
//#include <stdio.h>
//int main()
//{
//	int a[100];
//	a[0] = 1;
//	a[1] = 1;
//	int s = 0;
//	scanf("%d", &s);
//	for (int i = 2; i <= s; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	printf("%d", a[s-1]);
//	system("pause");
//}
// n^k 用递归函数实现
//#include <stdio.h>
//int fun(int n,int k)      // 3 3
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	return n*fun(n, k - 1); // 3 * fun(3,2) = 3 * 3 *fun(3,1) = 3 * 3 * 3 *fun(3,0)==
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int ret = fun(a,b);
//	printf("%d", ret);
//	system("pause");
//}
//DigitSum函数实现各个位数的和
//#include <stdio.h>
//int DigitSum(int n)					// 1397
//{
//	int sum = 0;
//	if (n < 10){
//		return n;              
//	}
//	return DigitSum(n / 10) + n % 10;   //D(139)+7  D(13)+9+7 D(1)+3+9+7 1+3+9+7
//}
// int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int ret = DigitSum(a);
//	printf("%d", ret);
//	system("pause");
//}
//分割数位倒置
//#include <stdio.h>
//void my_seperate(int a)
//{
//	if (a > 9)                    
//	{
//		my_seperate(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	my_seperate(a);
//	system("pause");
//}
// 递归 倒置字符串
#include <stdio.h>

void reverse_string(char* str)
{
	
	if (*str)
	{
		int len = strlen(str);
		char tmp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';
		reverse_string(str + 1);
		str[len - 1] = tmp;
	}
	/*for (int i = 0; str[i]!='\0'; i++)
	{
		printf("%d", str[i]);
	}
*/

}
int main()
{
	char str[] = "123456";
	reverse_string(str);
	printf("%s", str);
	system("pause");
}