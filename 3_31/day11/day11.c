#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	/*int n = 0;
//	scanf("%d", &n);*/
//	int a[100][100] = { 0 };
//
//	for (i = 0; i < 10; i++)
//	{
//		
//		a[i][0] = 1;
//		
//	}
//	for (i = 1; i < 10; i++)
//	{
//		
//		for (j = 1; j <= i; j++)
//		{
//			
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j ];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	system("pause");
//	return 0;
//}
//
//


/*
** �ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ������Ϊ4�����ɷ��е�һ����4��
** ���ɷ��Ĺ�������:
**    A˵: �����ҡ�
**    B˵: ��C��
**    C˵: ��D��
**    D˵: C�ں�˵��
** ��֪3����˵���滰��1����˵���Ǽٻ���������Щ��Ϣ��ͨ������ȷ��˵�ٻ������֡�
**/
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 0;
//	int sum = 0;
//	for (i = 0; i < 4; i++)
//	{
//		char a = 'A' + i;//���Ϊ���٣�����
//		sum = (a != 'A') + (a == 'C') + (a == 'D') + (a != 'D');
//		if (sum == 3)
//		{
//			flag = 1;
//			printf("%c ������", a);
//			break;
//		}
//		
//	}
//	/*if (flag == 0)
//	{
//		printf("û������");
//	}*/
//	system("pause");
//}
//#include <stdio.h>
//int main()
//{
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	int i = 10;
//	//printf("%d", i = (a, c, b));
//	char d = a + i;
//	//printf("%c\n", d);   // a���ʮ�� ��k ;
//	printf("%d\n", d);   // 97 
//	system("pause");
//}
















//�ַ�����ת abc de fgh ---> hgf ed cba 
//�ȼ� �ú������ַ����� ��ת��
//#include <stdio.h>
//void Swift(char * str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		
//	}
//
//}
//int main()
//{
//	char arr[] = "abc de fgh";
//	Swift(arr);
//	system("pause");
//}

//A: B = 2, A = 3;							//a = 3
//B: B = 2 ,E = 4;							//e = 4
//C: C = 1 ,D = 2;							//d = 2
//D: C = 5 ,D = 3;							//c = 5 
//E: E = 4 ,A = 1;							//e = 4
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	int i = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if (((B == 2) + (A == 3) == 1) && ((B == 2) + (E == 4) == 1) &&
//							((C == 1) + (D == 2) == 1) && ((C == 5) + (D == 3) == 1)
//							&& ((E == 4) + (A == 1) == 1) && (A != B) && (A != C) && (A != D) && (A != E)
//							&& (B != C) && (B != D) && (B != E) && (C != D) && (C != E) && (D != E))
//						{
//							printf("A�ܵ�%d\nB�ܵ�%d\nC�ܵ�%d\nD�ܵ�%d\nC�ܵ�%d\n", A, B, C, D, E);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//}


	/*int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	((b = 2) || (a = 3)) ;
	(b = 2) || (e = 4);
	(c = 1) || (d = 2);
	(c = 5) || (d = 3);
	(e = 4) || (a = 1);
}*/
/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
*/
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	char i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		char a = 'A' + i;
//		sum = (a != 'A') + (a == 'C') + (a == 'D') + (a != 'D');
//		if (sum == 3)
//		{
//			printf("%c������",a);
//			break;
//		}
//	}
//	system("pause");
//}