#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//int fac(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (int i = 3; i <= n; i++)
//	{
//			c = a + b;
//			a = b;
//			b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//		system("pause");
//	
//}
//#include <stdio.h>
//int fac(int n)
//{
//	int a = 0;
//	int b = 0;
//	int sum = 1;
//	int i = 0;
//	for (i = 3; i <= n; i++)
//	{
//		sum = fac(n - 1) + fac(n - 2);
//    }
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	system("pause");
//}
//#include <stdio.h>
//int Count(int n, int m)
//{
//	int count = n;
//	while (m >= 2)
//	{
//		count = n * Count( n,  m - 1);
//		m--;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int ret = Count(n, m);
//	printf("%d", ret);
//	system("pause");
//
//}
// n�Ľ׳� �ǽ׳�
//#include <stdio.h>
//int fac(int n)
//{
//	int i = 0;
//	int count = 1;
//	for (i = 1; i <= n; i++)
//	{
//		count *= i;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fac(a);
//	printf("%d", ret);
//	system("pause");
//
//}
// �ݹ� 
//#include <stdio.h>
//int fac(int n)
//{
//	int i = 0;
//	int count = 1;
//	if (n == 1)
//	{
//		return count = 1 ;
//	}
//	
//	 count *= n * fac(n - 1); // n = 3   3*fac(2) // 3 *2*fac(1)
//	 return count;
//	
//}
//int main()
//{
//		int a = 0;
//		scanf("%d", &a);
//		int ret = fac(a);
//		printf("%d", ret);
//		system("pause");
//}
//��strlen����
//#include <stdio.h>
//int my_strlen(int arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
//int main()
//{
//	int a[100];
//	int i = 0;
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		scanf("%d", a[i]);
//	}
//	int ret = my_strlen(a);
//	printf("%d", ret);
//	system("pause");
//}
//#include <stdio.h>
//int my_strlen(int arr[])
//{
//	
//}
//int main()
//{
//	int a[100];
//
//}




//int main()
//{
//	int arr[10];
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr[10], sz);
//	empty(arr[10], sz);
//	reverse(arr[10], sz);
//	system("pause");
//}
//�Ե� ����ô����n == 3������ٴ�
//#include <stdio.h>
//int fcb(int n)
//{
//	int num = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	if (n == 3)
//	{
//		num++;
//	}
//
//	else{
//		return fcb(n - 1) + fcb(n - 2);
//	}
//
//}
//int main()
//{
//	int c = 0;
//	scanf("%d", &c);
//	int ret = fcb(c);
//	printf("%d", ret);
//	system("pause");
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//int fcb(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (unsigned int i = 1; i <= n - 2; i++)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	return c;
//}
//int main()
//{
//	int d = 0;
//	scanf("%d", &d);
//	int ret = fcb(d);
//	printf("%d", ret);
//	system("pause");
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//int my_pow(int n, int k) 
//{
//	if (k >= 2)
//		return n*my_pow(n, k - 1);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = my_pow(n, k);
//	printf("%d", ret);
//	system("pause");
//
//}
//#include <stdio.h>
//int  DigitSum(int n)
//{
//	int sum = 0;
//	while (n > 9)
//
//}
//int main()
//{
//
//}
//#include <stdio.h>
//void my_separate(int n)
//{
//
//	while (n > 9)                       //4 5 6
//		//4 5
//	{									//4 
//		my_separate(n / 10);
//		n %= 10;
//
//	}
//	printf("%d ", n);
//
//}
//int main()
//{
//	int c = 0;
//	scanf("%d", &c);
//	my_separate(c);
//	system("pause");
//
//
//}
//�ǵݹ�
//#include <stdio.h>
//int main()
//{
//	int count = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		count *= i;
//	}
//	printf("%d", count);
//	system("pause");
//}
//�ݹ�
//#include <stdio.h>
//int fac(int n)
//{
//	if (n > 1)
//	{
//		return n*fac(n - 1);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	system("pause");
//
//
//
//}
//�� bug ��
//#include <string.h>
//#include <stdio.h>
//int my_strlen(int a[])
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 0; a[i] != '\0'; i++)
//	{
//		count++;
//	}
//	/*while (*a)
//	{
//		count++;
//		a++;
//	}*/
//	return count;
//}
//int main()
//{
//	char str = "123456";
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//	printf("%d\n", strlen(str));
//	system("pause");
//
//}
//#include <stdio.h>
//void reverse_string(char *string)
//{
//	for (int i = 0; string[i] != '\0'; i++)
//	{
//		printf("%d ", string[i]);
//	}
//}
//int main()
//{
//
//
//
//}
//#include <stdio.h>
//void my_seperate(int n)
//{
//	
//	while (n>9)						  
//	{
//		 my_seperate(n / 10);
//		 n = n % 10;
//	}
//	printf("%d ", n  );
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	my_seperate(a);
//	system("pause");
//
//
//}
//ûд����
//#include <stdio.h>
//int  my_seperate(int n)
//{
//
//	int sum = 0;
//	while (n>9)
//	{
//		
//		my_seperate(n / 10);
//	 	sum  += n % 10;
//	}
//	sum += sum;
//	return sum;
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret  = my_seperate(a);
//	printf("%d", ret);
//	system("pause");
//
//
//}
// �ѽ��
//#include <string.h>
//#include <stdio.h>
//int my_strlen(char a[])
//{
//	int count = 0;
//	int i = 0;
//	/*for (i = 0; a[i] != '\0'; i++)
//	{
//		count++;
//	}
//	*/
//	while (a[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
//int main()
//{
//	char string[100];
//	scanf("%s", string);
//	int ret = my_strlen(string);
//	printf("%d\n", ret);
//	system("pause");
//}
//������
//#include <stdio.h>
//#define N 100
//int strlen(char string[])
//{
//	int i = 0;
//	while (string[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char string[N];
//	scanf("%s", string);
//	int r = strlen(string);
//	printf("%d\n", r);
//	system("pause");
//	return 0;
//}
//�ݹ�ʵ��
//#include <stdio.h>
//#include <stdlib.h>
//int my_strlen(char *arr)
//{
//	
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else		//123456789
//	{
//
//		
//		return 1 + my_strlen(arr+1);
//	}
//}
//int main()
//{
//	char arr[100];
//	scanf("%s", arr);
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	system("pause");
//	
//
//}
/* ��дһ������ reverse_string(char * string)
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
//��ʵ�ַ������� ���������ǵݹ�
//#include <stdio.h>
//#include <stdlib.h>
//void reverse_string(char *str)
//{
//	int i = 0;
//	int temp = 0;
//	int n = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		n++;
//	}
//	printf("%d\n", n);
//	int left = 0;
//	int right = n - 1;
//	while (left<=right/2)
//	{
//		temp = str[left];
//		str[left] = str[right-left];
//		str[right-left] = temp;
//		left++;
//	
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%c", str[i]);
//	}
//	
//
//}
//int main()
//{
//	char arr[] = "litianhao";
//	reverse_string(arr);
//	system("pause");
//}
///* ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
//�ݹ�ʵ�֡�
//#include <stdio.h>
//#include <stdlib.h>
//void reverse_string(char *str)
//{
//	if (*str != '\0')// �ж��Ƿ�Ϊ���ַ�
//	{
//		str++; //һֱ���ͳ��Ԫ�ء�
//		reverse_string(str);//һֱ�õݹ�ͳ��ֱ��'\0'
//		printf("%c", *(str-1));//�Ӻ���ǰ �ݹ��
//	}
//
//
//}
//int main()
//{
//	char arr[100] = "wwwwlllll";
//	reverse_string(arr);
//	system("pause");
//}
// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//#include <stdio.h>
//int DigitSum(n)
//{
//	int count = 0;
//	while (n > 9)
//	{
//		DigitSum(n / 10);
//	
//	}
//	return 
//	
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int ret = DigitSum(m);
//	printf("%d", ret);
//	system("pause");
//}
#include <stdio.h>
#include <stdlib.h>
int DigitSum(int n)
{
	int sum = 0;
	int m = 0;
	if (n != 0)
	{
		m = n % 10;
		n = n / 10;
		sum = m + DigitSum(n);
	}
	return sum;

}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = DigitSum(a);
	printf("%d", ret);
	system("")
}