#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//class A
//{
//	int i;
//	char c;
//public:
//	A(int j = 0, char d = '*')
//	{
//		i = j;
//		c = d;
//	}
//	void display()
//	{
//		cout << "i = " << i << '\t' << "c = " << c << endl;
//	}
//};
//int main()
//{
//	A a1;
//	A a2(1, '#');
//	a1.display();
//	a2.display();
//	a1 = a2;
//	a2 = A(2, '@');
//	cout << "��ֵ��\n";
//	a1.display();
//	a2.display();
//	system("pause");
//	return 0;
//}
//ǳ����
#include <string>
//class Product{
//	char * ptr;
//public:
//	Product(char *q)
//	{
//		ptr = new char[strlen(q) + 1];
//		strcpy(ptr, q);
//		cout << "���ù��캯��������" << endl;
//	}
//	void change(char *newq)
//	{
//		strcpy(ptr, newq);
//	}
//	void display()
//	{
//		cout << ptr << endl;
//	}
//};
//int main()
//{
//	Product b1("Good");
//	Product b2(b1);
//	cout << "��Ʒ���ǰ��" << endl;
//	cout << "b1������" << endl;
//	b1.display();
//	cout << "b2������" << endl;
//	b2.display();
//	cout << "����" << endl;
//	b2.change("Poor");
//	cout << "b1������" << endl;
//	b1.display();
//	cout << "b2������" << endl;
//	b2.display();
//	system("pause");
//}
//���
//class Product
//{
//	char * ptr;
//public:
//
//	Product(char *q)
//	{
//		ptr = new char[strlen(q) + 10];
//		strcpy(ptr, q);
//		cout << "���ù��캯��" << endl;
//	}
//	Product(const Product &q){
//		ptr = new char[strlen(q.ptr) + 10];
//		strcpy(ptr, q.ptr);
//		cout << "���ÿ������캯��" << endl;
//	}
//	~Product()
//	{
//		delete []ptr;
//		cout << "������������"<<endl;
//	}
//	void change(char *q)
//	{
//		strcpy(ptr, q);
//	}
//	void display()
//	{
//		cout << ptr << endl;
//	}
//
//};
//int main()
//{
//	Product b1("good");
//	Product b2(b1);
//	cout << "��Ʒ���ǰ��" << endl;
//	cout << "b1������" << endl;
//	b1.display();
//	cout << "b2������" << endl;
//	b2.display();
//	cout << "����" << endl;
//	b2.change("poor");
//	cout << "b1������" << endl;
//	b1.display();
//	cout << "b2������" << endl;
//	b2.display();
//	system("pause");
//}
//???????????????????????????????????????????????????????????????????????
//class A{
//	int i;
//public:
//	A(int k = 0)
//	{
//		i = k;
//		cout << "�����˹��캯��������������" << endl;
//	}
//	A(const A&q)
//	{
//		i = q.i;
//		cout << "�����˸��ƹ��캯��������" << endl;
//	}
//	~A()
//	{
//		cout << "��������������������" << endl;
//	}
//};
//void fun1(A x)
//{}
//A fun2(){
//	A y;
//	return y;
//}
//int main()
//{
//	A a1(2);
//	fun1(a1);
//	A a2 = fun2();
//	system("pause");
//	return 0;
//}