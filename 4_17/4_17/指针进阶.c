#define _CRT_SECURE_NO_WARNINGS 1 
//#include  <stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a)); //16
//	printf("%d\n", sizeof(a+0));//4 sizeof()内部除第一种情况以外均表现为首元素
//	printf("%d\n", sizeof(*a));// 4 数组a的首地址 int*型 4
//	printf("%d\n", sizeof(a+1));// 4 和(a+0)类似吧
//	printf("%d\n", sizeof(a[1]));//4 第二个元素 int 型 4个
//	printf("%d\n", sizeof(&a));// 数组a的地址 int*型  4
//	printf("%d\n", sizeof(*&a));//还是a 但这里是 数组a的首元素 4
//	printf("%d\n", sizeof(&a+1));// 16+16  32;
//	printf("%d\n", sizeof(&a[0]));// 4 和*a类似吧
//	printf("%d\n", sizeof(&a[0]+1));// 和a[0]类似 除size(a)情况外，sizeof（a+x)均为首元素地址
//	//printf("%d\n", sizeof(a));
//	system("pause");
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));// 7
//	//printf("%d\n", sizeof(arr+0));// 4
//	//printf("%d\n", sizeof(*arr));//4
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));// 4
//	//printf("%d\n", sizeof(&arr+1));// 还是首元素地址 4?
//	//printf("%d\n", sizeof(&arr[0]+1));// 4
//	//printf("%d\n", strlen((arr)));// 6
//	//printf("%d\n", strlen(arr+0));// 6
//	//printf("%d\n", strlen(*arr)); // 1
//	//printf("%d\n", strlen(arr[1]));// 1
//	//printf("%d\n", strlen(&arr)); // 1
//	//printf("%d\n", strlen(&arr+1));// 1
//	//printf("%d\n", strlen(&arr[0]+1)); // 1
//	//system("pause");
//	////printf("%d", sizeof(arr[1]));
//	
//
//}
//#include <stdio.h>
//int main()
//{
//	/*char ch = 'w';
//	char *pc = &ch;
//	*pc = 'w';
//	return 0;*/
//	/*char *pstr= "hello bit.";
//	printf("%s\n", pstr);
//	system("pause");*/
//	/*char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 not \n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 not \n");
//	}*/
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr = %p\n", &arr);
//	printf("arr+1= %p\n", arr + 1);//增4
//	printf("&arr+1 = %p\n", &arr + 1);//增40
//	system("pause");
//}
