#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//取数组a的地址+1 加到下一个位置 5 后面的一位
//	printf("%d %d", *(a + 1), *(ptr - 1));// ptr -1 是向前访问一位，在解引用访问到5
//	system("pause");
//	// 2  5
//
//}
//#include <stdio.h>
////结构体大小为8个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设 p的地址为为0x100000 // 为什么这里的地址为0x100000?
//int main()
//{
//	printf("%p\n", p+0x1);//指针+1 加一个类型的大小//0x1000014
//	printf("%p\n", (unsigned long)p + 0x1);//强转为无符号整型 +1就是数值加1
//	printf("%p\n", (unsigned int*)p + 0x1);//强转为int*型，+1为加一个int型的大小
//	system("pause");
//
//}
//#include <stdio.h>
//int main()
//{  //  01 00 00 00 02 00 00 00 03 00 00 00
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int*)(&a + 1);//取到a[3]即4后面一位的地址
//	int *ptr2 = (int*)((int)a + 1);//把指针类型的a强转为int型在+1以后，在强转为int*型
//	printf("%x , %x", ptr1[-1], *ptr2); //ptr1[-1] 相当于*（ptr1-1)
//	system("pause");
//	//%x 为输出为16进制
//}
//#include <stdio.h>
//int main(int argc, char * argv[])
//{
//	//注意 这里是（）而不是{}，逗号表达式，看（）中最后一个表达式
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//在这里其实就是{1,3,5}
//	int *p;
//	p = a[0];//取数组第一行的地址，指向二维数组第一行的一维数组的指针，数组指针
//	printf("%d", p[0]);//访问数组第一行的首元素 是 1
//	system("pause");
//}
//#include <stdio.h>
//int main()
//{
//	int a[5][5];                   
//	int(*p)[4];
//	p = (int(*)[4])a;
//	printf("%p ,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");// %p打印 (4*4+2) - (4*5+2)      %d打印  -4
//}
// 回调函数 qosrt函数 实现快排
//#include <stdio.h>
//#include <stdlib.h>
//int int_cmp(const void *p1, const void *p2)
//{
//	return (*(int*)p1 > *(int*)p2);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//
//}
// 使用回调函数，模拟实现qsort(采用冒泡的方式)
#include <stdio.h>
int int_cmp(const void *p1, const void *p2)
{
	return (*())
}