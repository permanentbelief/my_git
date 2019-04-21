#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a)); //16			数组内的元素字节和 
	//printf("%d\n", sizeof(a+0));//4         这里a是数组的首地址
	//printf("%d\n", sizeof(*a));  //4        解引用 是a[0]的值
	//  printf("%d\n", *a);          //         解引用 为数组首元素
	//printf("%d\n", sizeof(a+1)); // 4           首地址加一 数组第二个元素的地址，相当于还是int* 的指针还是4个字节
	//printf("%d\n", *(a + 1));        //         数组第二个元素2
	//printf("%d\n", sizeof(a[1])); 4 //        int整形 4个字节
	//printf("%d\n", sizeof(&a)); // 4             取出数组的地址，相当于数组指针，与a[0]的地址相同
	//printf("%d\n", sizeof(*&a)); //16             数组指针 解引用是整个数组 ，数组字节数之和
	//printf("%d\n", sizeof(&a+1));// 4             1.与a+1类似 相当于取出第二个元素的地址 2. 或者理解为数组指针&a ,&a +1还是数组指针，还是4个字节
	//printf("%d\n", sizeof(&a[0]));// 4             指针类型 取a[0]的地址，4个字节。相当于a, &a,
	//
	//printf("%d\n", sizeof(&a[0]+1));// 4          指针类型 相当于取下一位
	 
	//printf("%p\n",&a[0]);
	//printf("%p\n", &a);
	//printf("%p\n", a);
	//printf("%p\n", a+1);// 地址 +4  指针往下走一位 走到a[2];
	//printf("%p\n", &a+1);// 地址+16  整个数组的长度。&a即为数组指针，数组指针+1 越过整个数组
	//printf("%p\n", &a[0]+1);// 地址+4 走到a[2];相当于取a[2]的地址
	
	
	
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr)); // 6 字符字节和
	//printf("%d\n", sizeof(arr+0)); //4 在这里是arr字符串的首地址
	//printf("%d\n", sizeof(*arr));// 1 对首地址解引用，为首元素
	//printf("%d\n", sizeof(arr[1]));// 1 第二个元素 char型
	//printf("%d\n", sizeof(&arr));//4     取出整个数组的指针，即为数组指针
	//printf("%d\n", sizeof(&arr+1));// 4   数组指针+1 还是数组指针
	//printf("%d\n", sizeof(&arr[0]+1));//4  取出首元素的地址 向下计算一位，即字符数组的第二位地址，也是char*类型
	//printf("%c\n", *(&arr[0] + 1)); // b 验证sizeof(&arr[0]+1);

	//printf("%d\n", strlen(arr));  // 注意 无'\0' 随机值
	//printf("%d\n", strlen(arr+0)); //          随机值？？？？？ strlen(arr+0)里的arr是指针吗，和sizeof(arr+0)里的类似吗？ 
	////printf("%d\n", strlen(*arr)); // 报错 是访问到 'a'了吗？
	////printf("%d\n", strlen(arr[1])); // 报错 arr[1] 里是 'b'
	//？？？？？？printf("%d\n", strlen(&arr));    // 随机值 访问到字符数组首地址
	//？？？？？？rintf("%d\n", strlen(&arr+1)); // 随机值
	//printf("%d\n", strlen(arr[0]+1));//访问到'b',计算b到'\0'的长度

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7  带上'\0’
	//printf("%d\n", sizeof(arr+0));// 4  char*类型指针
	//printf("%d\n", sizeof(*arr)); //1 首元素地址解引用
	//printf("%d\n", sizeof(arr[1]));//1  第二个元素 char类型 字节
	//printf("%d\n", sizeof(&arr));//4  数组指针 取出数组的首地址
	//printf("%d\n", sizeof(&arr+1));// 4  数组指针+1还是数组指针
	//printf("%d\n", sizeof(&arr[0]+1));//4  取出arr[0]或者数组的首地址 +1 向下读取一位，还是char*指针
	
	//printf("%d\n", strlen(arr));//6 不计'\0’
	//printf("%d\n", strlen(arr+0));//啥意思啊？arr是指针吗？ 为什么是6？ 重点！！！！！！！！
	//这里是不是 arr是数组的首地址，往后取直到取到字符'0’结束，所以为6 ?
	//延伸：
	//printf("%d\n", strlen(arr + 1));//5
	//printf("%d\n", strlen(arr + 2));//4
	//printf("%d\n", strlen(arr + 3));//3
	//printf("%d\n", strlen(arr + 4));//2

	//printf("%d\n", strlen(*arr));//报错 取到字符'a'
	//printf("%d\n", strlen(arr[1]));//报错 取到字符'b'
	//printf("%d\n", strlen(&arr));//  取数组的首地址直到'\0'结束，计算长度，所以为6
	 //printf("%d\n", strlen(&arr+1));// 12 数组指针+1  是加整个数组的长度
	//printf("%d\n", strlen(&arr[0]+1));// 取arr[0]的地址，向下访问到arr[1];从数组arr[1]开始直到访问到'\0’计算长度

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));  //4  char*指针类型 字符串首地址
	//printf("%d\n", sizeof(p+1)); //4  还是char*类型 第二个元素地址
	//printf("%d\n", sizeof(*p)); //1   字符串第一个char类型 的字节
	//printf("%d\n", sizeof(p[0]));//1  字符串第一个字符的字节
	//?????????????printf("%d\n", sizeof(&p)); // 4  字符串首地址 char*类型
	//?????????????printf("%d\n", sizeof(&p+1)); // 4  char*类型 指针数组+1还是 指针
	//?????????????printf("%d\n", sizeof(p[0]+1));//4  char*类型  指向字符串中第二个字符的 指针
	

	//printf("%d\n", strlen(p));// 6
	//printf("%d\n", strlen(p+1));// 5
	//printf("%d\n", strlen(*p)); // 报错 字符串首元素
	//printf("%d\n", strlen(p[0])); // 报错 字符串首元素
     //printf("%d\n", strlen(&p)); //  为啥是随机值？？？
	//printf("%d\n", strlen(&p+1));// 为啥是随机值？？？
	 //printf("%d\n", strlen(&p[0]+1));//5

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//12* 4 = 48;
	printf("%d\n", sizeof(a[0][0]));// 4;
	printf("%d\n", sizeof(a[0]));//4 * 4 =16;
	printf("%d\n", sizeof(a[0]+1));//4
	printf("%d\n", sizeof(*(a[0]+1)));//4
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(*(a+1)));//4× // 16
	printf("%d\n", sizeof(&a[0]+1));//4
	printf("%d\n", sizeof(*(&a[0]+1)));//16
	printf("%d\n", sizeof(*a));//4 ×//16
	printf("%d\n", sizeof(a[3]));//16

	//int* arr[10];//整形指针的数组
	//char *arr2[4];//一级字符指针的数组
	//char **arr3[5];//二级字符指针的数组
	/*int arr[10] = { 0 };
	printf("arr = %p\n", arr);
	printf("&arr = %p\n", &arr);

	printf("arr+1 =%p\n", arr + 1);
	printf("&arr = %p\n", &arr+1);*/
	//数组中 arr 与  &arr虽然值都一样，但意义不一样。
	//&arr是取出数组的地址，&arr+1，数组的地址加1，其实加了整个数组的大小。
	//而arr是数组首元素的地址，arr+1是指针往下指到第二个元素，是第二个元素的地址。
	/*printf("arr+1 = %p\n", arr + 1);
	printf("&arr+1 = %p\n", &arr + 1);

*/
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//int(*p)[10] = &arr;
	////printf("%p\n", &arr	
	////printf("%p\n", arr);
	////printf("%p\n", arr);
	//// 为什么打印出来是随机值
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[1]);
	//printf("%p\n", &arr[2]);


	//void test2(int **arr)//ok?
	//{
	//	;
	//}
	//int main()
	//{
	//	int arr[10] = { 0 };
	//	int *arr2[20] = { 0 };
	//	//指针数组 arr2 是指针名字 还是数组名字
	//	test2(arr2);


	system("pause"); 
}