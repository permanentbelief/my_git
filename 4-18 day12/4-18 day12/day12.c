#define _CRT_SECURE_NO_WARNINGS 1 
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//
#include <stdio.h>
//unsigned int reverse_bit(unsigned int value)
void reverse_bit(unsigned int value)
{
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		value %= 2;  //   0000101
		printf("%d", value);// 101
		value = value >> 1;

	}
	//for (i = 0; i < 32; i++)
	//{
	//	printf("%d",value);
	//}
	//

}
int main()
{
	unsigned int num = 5;
	//scanf("%d", &num);
	reverse_bit(num);
	//int ret =  reverse_bit(num);
	//printf("%d", ret);
	system("pause");
}
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;														// 00011
//	scanf("%d %d",&a,&b); 
//	//printf("%d\n", (a&b) + (a^b)/2); 
//	//printf("%d\n", (a&b)  + (a^b) >> 1);
//	// 00101 
//	int mid = 0;													// 00001  110	
//	//mid = a + (b - a) / 2;    
//	mid = (a&b) + ((a^b)>>1) ;
//	printf("%d",mid);
//	system("pause");
//}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,1,2 }; //char �ַ����п�����������
//	int i = 0;
//	/*for (i = 0; arr[i] != '\0'; i++)
//	{
//		printf("%c", arr[i]);
//	}*/
//	int sum = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		sum ^= arr[i];
//	}
//	printf("%d", sum);
//	system("pause");
//}
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//			student a am i
//			i ma a tneduts
//			i am a student
//#include <stdio.h>
//void reverse_string(char *str)
//{
//	int i = 0;
//	int left = 0;
//	int right = 0;
//	int temp = 0;
//	int count = 0;
//	int n = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		right++;
//	}
//	/*for (i = 0; i < right ; i++)
//	{
//	printf("%c", str[i]);
//	}*/
//	//count = right;
//	/*while (left <= right)
//	{
//	temp = str[left];
//	str[left] = str[right];
//	str[right] = temp;
//	left++;
//	right--;
//	}*/
//	for (i = 0; i < (left + right) / 2; i++)
//	{
//		temp = str[i];
//		str[i] = str[right - 1 - i];
//		str[right - 1 - i] = temp;
//
//	}
//	/*for (i = 0; i < right ; i++)
//	{
//	printf("%c", str[i]);
//	}*/
//	for (i = 0; i < right; i++)
//	{
//		//count = 0;
//		
//		
//		if (str[i] != " ")
//		{
//			n++;
//			
//		}
//		if (str[i] == " ")
//		{
//			
//			for (i = count ; i <  count + n / 2; i++)
//			{
//				temp = str[i];
//				str[i] = str[n - i - 1];
//				str[n - i - 1] = temp;
//			}
//			
//			
//
//
//		}
//		count = n;
//		//count = 0;
//
//	}
//	/*for (i = 0; i < right; i++)
//	{
//		printf("%c", str[i]);
//	}*/
//	printf("%s", str);
//
//
//}
//int main()
//{
//	char str[] = "student a am i";
//	reverse_string(str);
//	system("pause");
//	return 0;
//
//}
