#define _CRT_SECURE_NO_WARNINGS 1 
/*дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
	// ���� 1��λ�� 
}*/
// �ҵķ���
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
// ������
//#include <stdio.h>
//int count_one_bits(unsigned int value) // 0000 1111
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)                 //0000 0001
//	{  // �жϵ�һλ��������ż��
//	   //  �����ĵ�һλ�϶�Ϊ1
//		if (value % 2 == 1)   
//		{
//			count++;
//		}
//		value /= 2;// ��ǰ��һλ��
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
//������
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
//λ������ż����
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
//	//�����Ƶ������
//	for (i = 0; i < 32; i++)
//	{
//		val = ret;
//		val % 2;        // 1 0 1
//		ret /= 2;       //val = 2 1
//		printf("%d", val%2);
//	}
//	system("pause");
//}
// ���һ�����Ķ�����
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