#define _CRT_SECURE_NO_WARNINGS 1 
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
/// ���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
//	// �����������̫�࣬Ч�ʵ�
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
//	printf("������3*3����");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("��������Ҫ�ҵ�ֵ");
//	scanf("%d", &key);
//	int ret = search_key(arr, key);
//	if (ret == 1)
//	{
//		printf("�ҵ���");
//	}
//	else
//	{
//		printf("û�ҵ�");
//	}
//
//
//	system("pause");
//	return 0;
//}
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

#include <stdio.h>
#include <string.h>

//void Is_qstring(char *a, char *b��int sz)
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
		printf("��������תk");
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