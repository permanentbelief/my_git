#define _CRT_SECURE_NO_WARNINGS 1
//1、完成下面程序，熟悉函数调用的参数传递机制。
//（1）给定以下函数原型声明：
//void sort1(int *a, int *b, int *c);
//#include <iostream>
//using namespace std;
//void sort1(int *a, int *b, int *c)
//{
//	int temp = 0;
//	if (*a < *b)
//	{
//		temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//	if (*a < *c)
//	{
//		temp = *a;
//		*a = *c;
//		*c = temp;
//	}
//	if (*b < *c)
//	{
//		temp = *b;
//		*b = *c;
//		*c = temp;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cin >> a >> b >> c;
//	sort1(&a, &b, &c);
//	cout << a << " " << b << " " << c << endl;
//	system("pause");
//
//}
//（2）给定以下函数原型声明：
//void sort2(int &a, int &b, int &c);
//假设函数功能是把三个整数按降序排列，编程实现这个函数。
//#include <iostream>
//using namespace std;
//void sort2(int *a, int *b, int *c)
//{
//	int temp = 0;
//	if (*a > *b)
//	{
//		temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//	if (*a > *c)
//	{
//		temp = *a;
//		*a = *c;
//		*c = temp;
//	}
//	if (*b > *c)
//	{
//		temp = *b;
//		*b = *c;
//		*c = temp;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cin >> a >> b >> c;
//	sort2(&a, &b, &c);
//	cout << a << " " << b << " " << c << endl;
//	system("pause");
//
//}
//11、编一程序，将字符串“Hello, C++！”赋给一个字符数组，
//然后从第一个字母开始间隔地输出该串（请用指针完成）
//#include <iostream>
//using namespace std;
//int main()
//{
//	int i = 0;
//	char str[] = "Hello , C++! ";
//	char *p = str;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		cout<<*(str+i)<<;
//	}
//	system("pause");
//}
//12、编写一个函数，用于去掉字符串尾部的空格符。
//函数原型为：char *mytrim(char *string);
//其中参数string为字符串，返回值为指向string的指针。
//#include <iostream>
//using namespace std;
//char * mytrim(char *string)
//{
//	char i = 0;
//	char *p = string;
//	for (i = 0; string[i] != '\0'; i++)
//	{
//		if (*(p+i) == ' ')
//		break;
//		
//	}
//	return (p + i);
//
//}
//int main()
//{
//	char str[] = "welcom to c++ ";
//	char *p = str;
//	char ret = 0;
//	ret = *mytrim(str);
//	int i = 0;
//	for (i = 0; i < ret; i++)
//	{
//		cout << str[i];
//	}
//	system("pause");
//}
//13、编写一个函数，用于去掉字符串前面的空格。
//函数原型为：char *myltrim(char *string); 
//其中参数string为字符串，返回值为指向string的指针。
//10、运行下面程序，考虑内存泄露的危害性。
//#include <iostream>
//using namespace std;
//int main()
//{
//	int s = 99999999;
//	while (1)
//	{
//		new int[s];
//	}
//	return 0;
//}
//9、阅读下列程序，指出错误的语句和出错的原因，然后上机调试并改正错误。
//int main()
//{
//	int a = 15, b = 20;
//	const int c = 105;// c的值为 105 固定 0 
//	const int *p1 = &c;// *p1 存放的数据一直是c的地址 ，*p1 的值
//	int *const p2 = &b; // p2 是永远指向 b的指针
//	const int *const p3 = &c;//P3 是c指向 c的指针  *p3 是c的值
//	p1 = &b;  //错误，const 语句不能被修改
//	*p1 = 100; //*P1 不可改变
//	p2 = &a; // P2 不可改变
//	*p2 = a;
//	p3 = &b;		// P3 不可改变
//	*p3 = 100;		// *P3不可改变
//	return 0;
//}
//2、编写函数，其原型为：void index(int a[], int n, int & sub)功能：
//在大小为 n 的数组 a 中，查找某个数 sub，若找到，将对应数组元素的下标赋给sub，
//若没找到，将 - 1 赋给 sub，在主调函数中通过判断 sub 的值来判断数组中是否有该数。
//在这里，sub 是引用类型的参数，但起返回值的作用。
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void index(int a[], int n, int &sub)
//{
//	int left = 0;
//	int right = n - 1;
//	int mid = left + (right - left) / 2;
//	while (left <= right)
//	{
//		if (sub < a[mid])
//		{
//			right = mid - 1;
//		}
//		if (sub > a[mid])
//		{
//			left = mid + 1;
//		}
//		if (sub == a[mid])
//		{
//			cout << "sub=" << mid << endl ;
//			break;
//
//		}
//	}
//	/*if (left > right)
//	{
//		cout << "sub=" << -1 << endl;
//	}*/
//
//	
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	cout << "请输入你想查找的数" << endl;
//	int k = 0;
//	cin >> k;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	index(arr, sz, k);
//	system("pause");
//}
//3、编写字符串查找函数 mystrchr()。该函数的功能是在字符串中查找指定字符
//，如果有该字符，则返回该字符在字符串中第次出现的位置，否则返回 0，
//然后便协主函数进行验证。函数原型为：int mystrchr(char string[], char c); 。
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int mystrchr(char string[], char c)
//{
//	int i = 0;
//	for (i = 0; string[i] != '\0'; i++)
//	{
//		if (string[i] == c)
//		{
//			return i;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr[]="hello，XIONGDI";
//	char a = 0;
//	/*for (int i = 0; arr[i] != '\0'; i++)
//	{
//		cin >> arr[i];
//	}*/
//	cin >> a; 
//	int ret = mystrchr(arr, a);
//	printf("%d", ret);
//	system("pause");
//}
/*4、编写字符串反转函数 mystrrev()。该函数功能是将指定字符串中的字符顺序颠倒排列，
然后再编写主函数进行验证。函原型为：
void mystrrev(char string[]); 。*/
//#include <iostream>
//#include <string>
//using namespace std;
//void mystrrev(char *str)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		count++;
//	}
//	int left = 0;
//	int right = count - 1;
//	while (left <= right)
//	{
//		int temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//	for (i = 0; i < count; i++)
//	{
//		cout << str[i];
//	}
//
//}
//int main()
//{
//	char arr[100];
//	cin >> arr;
//	mystrrev(arr);
//	system("pause");
//	
//}
//14、编写程序编写一程序（应该有多个函数），允许从键盘输入任意多个英语单词（单词可以重复）
//，中间用空格分开，输入 0 表示输入结束。该程序可以统计同一个英语单词被输入几次，最后对英
//文单词按字典顺序输出，后面跟上该单词被输入的次数。(提示，尝试用结构体组织数据，把单词和该单
//出现的次数用一个结构体来描述。)
//比如输入： book am book is book am 0输出：am 2 book 3 is 1
//#include <iostream>
//using namespace std;
//struct stu s
//{
//
//}
//int main()
//{
//
//}
//12、编写一个函数，用于去掉字符串尾部的空格符。函数原型为：char *mytrim(char *string);
//其中参数 string 为字符串，返回值为指向 string的指针。
//#include <iostream>
//char *mytrim(char *string)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; string[i] != '\0'; i++)
//	{
//		if (string[i] != ' '){
//			string[j++] = string[i];
//		}
//	}
//	string[j] = '\0';
//	return string;
//	
//}
//using namespace std;
//int main()
//{
//	char str[100];
//	gets(str);
//	mytrim(str);
//	puts(str);
//	system("pause");
//	
//
//}
//、编写一个函数，用于去掉字符串前面的空格函数原型为：char *myltrim(char *string);
//其中参数 string 为字符串，返回值为指向 string的指针。
#include <iostream>
using namespace std;
char *myltrim(char *string)
{
	int i = 0;
	int count = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		count++;
	}
	int j = count-1;
	int n = 0;
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')
		{
			string[j--] = string[count-1-i];
			n++;
		}
	}
	string[count-n] = '\0';
	return string;

	/*if (string[i] != ' ')
	{
	string[j--] = string[i]
	}*/
}
int main()
{
	char arr[100];
	gets(arr);
	myltrim(arr);
	puts(arr);
	system("pause");
}