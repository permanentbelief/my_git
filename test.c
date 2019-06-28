#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
//void BubbleSort(int arr[], int n)
//{
//	int flag = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 1;
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//			if (flag == 0)
//			{
//				break;
//			}
//		}
//	
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 7, 9, 5, 8, 6, 2 };
//	BubbleSort(arr,7);
//	system("pause");
//}
//#include <stdio.h>
//#include <string.h>
//void Swap(char * arr , int n)
//{
//	int begin = 0;
//	int end = n - 1;
//	while (begin <= end)
//	{
//		char temp = arr[begin];
//		arr[begin] = arr[end];
//		arr[end] = temp;
//		begin++;
//		end--;
//	}
//}
//int Is_swap(char* str1, char * str2)
//{
//	if (strcmp(str1, str2) == 0)
//	{
//		return 1;
//	}
//	
//	return 0;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	char arr1[100] = { 0 };
//	printf("请输入一个字符串,判断是否为回文\n");
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	strcpy(arr1, arr);
//	Swap(arr1,sz);
//	if (Is_swap(arr1,arr) == 1)
//	{
//		printf("此字符串为回文\n");
//	}
//	else
//	{
//		printf("此字符串不为回文\n");
//	}
//	system("pause");
//
//}
//#include <stdio.h>
//int Sum(int arr[])
//{
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//int main()
//{
//	int  arr[5] = { 0 };
//	printf("请输入5个数，求和\n");
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	printf("和为%d\n", Sum(arr));
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	system("pause");
//}
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 1;
//	while (sum <= 800)
//	{
//		sum += i*i;
//		i++;
//	}
//	printf("%d", i - 1);
//	system("pause");
//}
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int count = 1;
//	for (int i = 1; i <= 6 ; i++)
//	{
//		count *= i;
//		if (i % 3 == 0)
//		{
//			sum += count;
//			count = 1;
//		}
//	
//	}
//	printf("%d", sum);
//	system("pause");
//}
//打印 1 11 111 1111 11111
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int i = 0;
//	int s = a;
//	int sum = a;
//	for (i = 0; i < 3; i++)
//	{
//		
//
//		//printf("%d ", s); //1 11 
//		s = s * 10 + a;
//		sum += s;
//	}
//	printf("%d", sum);
//	system("pause");
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//
//	printf("请输入循环次数n,  和初始值a\n");
//	scanf("%d %d", &n, &a);
//	int sum = a;
//	int s = a;
//	for (i = 1; i < n; i++)
//	{
//
//
//		//printf("%d ", s); //1 11 
//		s = s * 10 + a;
//		sum += s;
//	}
//	printf("%d", sum);
//	system("pause");
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (int i = 3; i <= 40; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		printf("%d ", c);
//	}
//	system("pause");
//}
// 斐波那契数列 打印前四十个值
//#include <stdio.h>
//int main()
//{
//	int Fac[100] = { 0 };
//	Fac[0] = 1;
//	Fac[1] = 1;
//	for (int i = 2; i < 40; i++)
//	{
//		Fac[i] = Fac[i - 1] + Fac[i - 2];
//	}
//	for (int i = 0; i < 40; i++)
//	{
//		printf("%d ", Fac[i]);
//		if (i % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//	system("pause");
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (i <= 100)
//	{
//		if (i % 31 == 0)
//		{
//			n = i;
//		}
//		i++;
//	}
//	printf("%d", n);
//	system("pause");
//}
//#include <stdio.h>
//int main()
//{
//	double tor = 1.0;  //分母
//	double dem = 2.0;  //分子
//	double sum = 0;
//	for (int i = 1; i <= 15; i++)
//	{
//		sum += (dem / tor);
//		double temp = 0.0;
//		temp = tor;//把分母的值存一下    temp = 1
//		tor = dem;//下一个数的分母等于上一个数的分子 tor =2
//		dem = dem + temp;//分子加分母 dem = 3
//	}
//	printf("%.2lf", sum);
//	system("pause");
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int a[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] <= 0)
//		{
//			sum += a[i];
//		}
//	}
//	printf("sum = %d", sum);
//	system("pause");
//}


//24 最大公约数
//int main()
//{
//	int number1 = 0;
//	int number2 = 0;
//	printf("请输入两个数，求这两个数的最大公约数\n");
//	scanf("%d %d", &number1, &number2);
//	int n = 0;
//	int min = (number1 > number2) ? number2 : number1;
//	int i = 1;
//	while (i <= min)
//	{
//		if (number1 % i == 0 && number2 % i == 0)
//		{
//			n = i;
//		}
//		i++;
//	}
//	printf("%d与%d的最大公约数为%d\n", number1, number2, n);
//	system("pause");
//}
//25 字符串大写变成小写输出
//int main()
//{
//	char arr[100] = { 0 };
//	printf("请输入字符串\n");
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i])
//	{
//		if (arr[i] >= 65 && arr[i] < 92)
//		{
//			arr[i] = arr[i] + ' ';
//		}
//		i++;
//	}
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	system("pause");
//}
//26
//int main()
//{
//	char arr[100] = { 0 };
//	int m = 0;
//	int n = 0;
//
//	printf("请输入字符串\n");
//	scanf("%s", arr);
//	printf("请输入从字符串的下标m开始,n个数进行打印\n");
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	
//	for (i = m; arr[i] != '\0'&& i < m + n; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	system("pause");
//}
//27
//void f(int n) //求平方
//{
//
//}
//int main()
//{
//	printf("请输入一个数\n");
//	size_t n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i*i; 
//	}
//	printf("%d", sum);
//	system("pause");
//
//
//}

//28
//int main()
//{
//	int a = 0;//百
//	int b = 0;//十
//	int c = 0;//个
//	for (int i = 100; i <= 999; i++)
//	{
//		c = i % 10;
//		a = i / 100;
//		b = (i / 10) % 10;
//		if (a*a*a + b*b*b + c*c*c == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//}
//29
//int main()
//{
//	char str[100] = { 0 };
//	int  n = 0;
//	printf("请输入字符串\n");
//	scanf("%s", str);
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		n = 0;
//		if (str[i] == 'a')
//		{
//			n = i;
//			for (int i = n; str[i] != '\0'; i++)
//			{
//				str[i] = str[i + 1];
//			}
//		}
//	}
//	//打印字符串
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		printf("%c", str[i]);
//	}
//	system("pause");
//}
//30
//int main()
//{
//	char str[100] = { 0 };
//	printf("请输入字符串\n");
//	scanf("%s", str);
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == 'a')
//		{
//			str[i] = '*';
//		}
//	}
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		printf("%c", str[i]);
//	}
//	system("pause");
//}









//31
//int main()
//{
//	char arr[100] = { 0 };
//	printf("请输入一个你要反转的字符串\n");
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	int start = 0;
//	int end = sz - 1;
//	while (start <= end)
//	{
//		char temp = arr[end];
//		arr[end] = arr[start];
//		arr[start] = temp;
//		start++;
//		end--;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	system("pause");
//}




// 33
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	printf("请输入要打印的行数\n");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= 2*i -1 ; j++)
//		{
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//	system("pause");
//}