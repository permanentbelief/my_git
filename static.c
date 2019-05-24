#define _CRT_SECURE_NO_WARNINGS 1 
//static 修饰局部变量


//代码1
//局部变量不影响整体变量
//#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d", i);
//
//}
//int main()
//{
//	
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	system("pause");
//}

// 代码2
// static 修饰局部变量 改变了变量的生命周期，静态变量出了生命周期依然存在
// 直到结束
//#include <stdio.h>
//void test()
//{
//	
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	system("pause");
//	return 0;
//}