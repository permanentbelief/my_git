#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//ȡ����a�ĵ�ַ+1 �ӵ���һ��λ�� 5 �����һλ
//	printf("%d %d", *(a + 1), *(ptr - 1));// ptr -1 ����ǰ����һλ���ڽ����÷��ʵ�5
//	system("pause");
//	// 2  5
//
//}
//#include <stdio.h>
////�ṹ���СΪ8���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////���� p�ĵ�ַΪΪ0x100000 // Ϊʲô����ĵ�ַΪ0x100000?
//int main()
//{
//	printf("%p\n", p+0x1);//ָ��+1 ��һ�����͵Ĵ�С//0x1000014
//	printf("%p\n", (unsigned long)p + 0x1);//ǿתΪ�޷������� +1������ֵ��1
//	printf("%p\n", (unsigned int*)p + 0x1);//ǿתΪint*�ͣ�+1Ϊ��һ��int�͵Ĵ�С
//	system("pause");
//
//}
//#include <stdio.h>
//int main()
//{  //  01 00 00 00 02 00 00 00 03 00 00 00
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int*)(&a + 1);//ȡ��a[3]��4����һλ�ĵ�ַ
//	int *ptr2 = (int*)((int)a + 1);//��ָ�����͵�aǿתΪint����+1�Ժ���ǿתΪint*��
//	printf("%x , %x", ptr1[-1], *ptr2); //ptr1[-1] �൱��*��ptr1-1)
//	system("pause");
//	//%x Ϊ���Ϊ16����
//}
//#include <stdio.h>
//int main(int argc, char * argv[])
//{
//	//ע�� �����ǣ���������{}�����ű��ʽ�������������һ�����ʽ
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//��������ʵ����{1,3,5}
//	int *p;
//	p = a[0];//ȡ�����һ�еĵ�ַ��ָ���ά�����һ�е�һά�����ָ�룬����ָ��
//	printf("%d", p[0]);//���������һ�е���Ԫ�� �� 1
//	system("pause");
//}
//#include <stdio.h>
//int main()
//{
//	int a[5][5];                   
//	int(*p)[4];
//	p = (int(*)[4])a;
//	printf("%p ,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");// %p��ӡ (4*4+2) - (4*5+2)      %d��ӡ  -4
//}
// �ص����� qosrt���� ʵ�ֿ���
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
// ʹ�ûص�������ģ��ʵ��qsort(����ð�ݵķ�ʽ)
#include <stdio.h>
int int_cmp(const void *p1, const void *p2)
{
	return (*())
}