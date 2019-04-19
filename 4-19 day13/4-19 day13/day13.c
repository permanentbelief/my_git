#define _CRT_SECURE_NO_WARNINGS 1 
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//#include <stdio.h>
//
//void first_oven(int *a, int sz)
//{
//	int b[5] = { 0 };
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (a[i] % 2 == 1)  
//		{
//			b[j++] = a[i];          //b[0] = a[0] =1  ; b[2] =a[2]   b[4] =a[4]
//								// j=1               2        3
//			count++;                //count =1           2        3
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			
//			b[j] = a[i];
//			j++;
//		}
//	}
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ", b[j]);
//	}
//}
//
////		for (j = 0; j < sz; j++)
////		{
////		if (a[i] % 2 == 1)
////			{
////				
////				//printf("%d ", a[i]);
////				b[j] = a[i];
////				count++;
////				
////			}
////			
////			//printf("%d ", a[i]);
////		}
////		/*for (j = count; j < sz; j++)
////		{
////			if (a[i] % 2 == 0)
////			{
////				b[j] = a[i];
////			}
////		}*/
////	}
////	for (j = 0; j < sz; j++)
////	{
////		printf("%d ", b[j]);
////	}
////}
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	first_oven(arr, sz);
//	//int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//int j = 0;
//	//int count = 0;
//	//int b[9] = { 0 };
//	//for (i = 0; i < sz; i++)
//	//{
//	//	if (arr[i] % 2 == 0)
//	//	{
//	//		count++;
//	//	}
//	//}
//	//for (i = 0; i < sz; i++)
//	//{
//	//	for (j = 0; j < count; j++)
//	//	{
//	//		if (arr[i] % 2 == 0)
//	//		{
//	//			b[j] = arr[i];
//	//		}
//	//	}
//	//	for (j = count; j < sz; j++)
//	//	{
//	//		if (arr[i] % 2 == 1)
//	//		{
//	//			b[j] = arr[i];
//	//		}
//	//	}
//	//}
//	//	//printf("%d ", arr[i]);
//	//	/*if (arr[i] % 2 == 0)
//	//	{
//	//		b[j] = arr[i];
//	//		count++;
//	//	}*/
//	//
//	//for (j = 0; j < sz; j++)
//	//{
//	//	printf("%d", b[j]);
//	//}
//	//printf("%d", sz);
//	system("pause");
//}
/// 杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//4 5 6
//7 8 9
//#include <stdio.h>
//
//int search_key(int a[3][3],int key)
//{
//	int left = a[0][0];
//	int right = a[2][2];
//	int i = 0;
//	int j = 0;
//	if (key < left || key >left)
//	{
//		return -1;
//	}
//	for (j = 0; j < 3; j++)
//	{
//		
//		
//	}
//		
//	// 计算机算的情况太多，效率低
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (a[i][j] == key)
//			{
//				return 1;
//			}
//		}
//	}
//	return -1;
//	*/
//	
//}
//int main()
//{
//	int arr[3][3] = { 0 } ;
//	int key = 0;
//	printf("请输入3*3矩阵");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("请输入你要找的值");
//	scanf("%d", &key);
//	int ret = search_key(arr, key);
//	if (ret == 1)
//	{
//		printf("找到了");
//	}
//	else
//	{
//		printf("没找到");
//	}
//
//
//	system("pause");
//	return 0;
//}
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include <stdio.h>
//
//void swift_string(char *a, int sz ,int k)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int temp = 0;
//	
//		for (i = 0; i < k; i++)
//		{
//			temp = a[0];
//			for (j = 0; j < sz; j++)
//			{
//				//a[sz - 1] = a[j];
//			a[j] = a[j + 1];   
//			
//		}
//			a[sz - 1] = temp;
//	}
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		printf("%c", a[i]);
//		
//
//	
//		
//	}
//}
//
//int main()
//{
//	char str[] = "ABCD";              
//	int sz = 0;
//	int k = 5;
//	sz = sizeof(str) / sizeof(str[0]);
//	//printf("%d", sz);
//	swift_string(str, sz - 1, k);
//	system("pause");
//}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

#include <stdio.h>
#include <string.h>

//void Is_qstring(char *a, char *b，int sz)
//{
//	int i = 0;
//	for (k )
//	{
//
//	}
//
//}

int main()
{
	
		int i = 0;
		int j = 0;
		int k = 0;
		printf("请输入旋转k");
		char c[] = "bcda";		
		int count = 0;
		int temp = 0;
		char a[] = "abcd";
		char b[10] = { 0 };
		strcpy(b , a);
		//printf("%s", b);
		int sz = sizeof(a) / sizeof(a[0]) - 1;
		for (i = 0; i < k; i++)
		{
			temp = a[0];
			for (j = 0; j < sz; j++)
			{
				//a[sz - 1] = a[j];
				a[j] = a[j + 1];

			}
			a[sz - 1] = temp;
		}
		/*for (i = 0; a[i] != '\0'; i++)
		{
			printf("%c", a[i]);
		}*/
		strcpy(b, a);
		printf("%s", b);
		system("pause");
		return 0;
}