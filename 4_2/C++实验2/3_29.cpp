#define _CRT_SECURE_NO_WARNINGS 1
//1��������������Ϥ�������õĲ������ݻ��ơ�
//��1���������º���ԭ��������
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
//��2���������º���ԭ��������
//void sort2(int &a, int &b, int &c);
//���躯�������ǰ������������������У����ʵ�����������
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
//11����һ���򣬽��ַ�����Hello, C++��������һ���ַ����飬
//Ȼ��ӵ�һ����ĸ��ʼ���������ô�������ָ����ɣ�
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
//12����дһ������������ȥ���ַ���β���Ŀո����
//����ԭ��Ϊ��char *mytrim(char *string);
//���в���stringΪ�ַ���������ֵΪָ��string��ָ�롣
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
//13����дһ������������ȥ���ַ���ǰ��Ŀո�
//����ԭ��Ϊ��char *myltrim(char *string); 
//���в���stringΪ�ַ���������ֵΪָ��string��ָ�롣
//10������������򣬿����ڴ�й¶��Σ���ԡ�
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
//9���Ķ����г���ָ����������ͳ����ԭ��Ȼ���ϻ����Բ���������
//int main()
//{
//	int a = 15, b = 20;
//	const int c = 105;// c��ֵΪ 105 �̶� 0 
//	const int *p1 = &c;// *p1 ��ŵ�����һֱ��c�ĵ�ַ ��*p1 ��ֵ
//	int *const p2 = &b; // p2 ����Զָ�� b��ָ��
//	const int *const p3 = &c;//P3 ��cָ�� c��ָ��  *p3 ��c��ֵ
//	p1 = &b;  //����const ��䲻�ܱ��޸�
//	*p1 = 100; //*P1 ���ɸı�
//	p2 = &a; // P2 ���ɸı�
//	*p2 = a;
//	p3 = &b;		// P3 ���ɸı�
//	*p3 = 100;		// *P3���ɸı�
//	return 0;
//}
//2����д��������ԭ��Ϊ��void index(int a[], int n, int & sub)���ܣ�
//�ڴ�СΪ n ������ a �У�����ĳ���� sub�����ҵ�������Ӧ����Ԫ�ص��±긳��sub��
//��û�ҵ����� - 1 ���� sub��������������ͨ���ж� sub ��ֵ���ж��������Ƿ��и�����
//�����sub ���������͵Ĳ��������𷵻�ֵ�����á�
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
//	cout << "������������ҵ���" << endl;
//	int k = 0;
//	cin >> k;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	index(arr, sz, k);
//	system("pause");
//}
//3����д�ַ������Һ��� mystrchr()���ú����Ĺ��������ַ����в���ָ���ַ�
//������и��ַ����򷵻ظ��ַ����ַ����еڴγ��ֵ�λ�ã����򷵻� 0��
//Ȼ���Э������������֤������ԭ��Ϊ��int mystrchr(char string[], char c); ��
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
//	char arr[]="hello��XIONGDI";
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
/*4����д�ַ�����ת���� mystrrev()���ú��������ǽ�ָ���ַ����е��ַ�˳��ߵ����У�
Ȼ���ٱ�д������������֤����ԭ��Ϊ��
void mystrrev(char string[]); ��*/
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
//14����д�����дһ����Ӧ���ж��������������Ӽ�������������Ӣ�ﵥ�ʣ����ʿ����ظ���
//���м��ÿո�ֿ������� 0 ��ʾ����������ó������ͳ��ͬһ��Ӣ�ﵥ�ʱ����뼸�Σ�����Ӣ
//�ĵ��ʰ��ֵ�˳�������������ϸõ��ʱ�����Ĵ�����(��ʾ�������ýṹ����֯���ݣ��ѵ��ʺ͸õ�
//���ֵĴ�����һ���ṹ����������)
//�������룺 book am book is book am 0�����am 2 book 3 is 1
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
//12����дһ������������ȥ���ַ���β���Ŀո��������ԭ��Ϊ��char *mytrim(char *string);
//���в��� string Ϊ�ַ���������ֵΪָ�� string��ָ�롣
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
//����дһ������������ȥ���ַ���ǰ��Ŀո���ԭ��Ϊ��char *myltrim(char *string);
//���в��� string Ϊ�ַ���������ֵΪָ�� string��ָ�롣
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