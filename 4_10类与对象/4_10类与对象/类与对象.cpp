#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//�������
//class Point 
//{
//	int x, y;
//public:
//	void setXY(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//	int getX()
//	{
//		return x;
//	}
//	int getY()
//	{
//		return y;
//	}
//};
//int main()
//{
//	Point point1;
//	Point point2;
//	point1.setXY(5, 5);
//	cout <<"(" << point1.getX() << "," << point1.getY()<< ")" << endl;
//	system("pause");
//
//}
// �۲������ռ�ֽ�
//class A{
//	int x;
//	int y;
//	int z;
//	char c; // 
//public:
//	void setX(int b)
//	{
//		x = b;
//	}
//};
//int main()
//{
//	A a;
//	cout << sizeof(int) << "\n" <<sizeof(a);//����ֽ� Ϊ����ı������͵��ֽں�
//	system("pause");
//}
//��ķ���
//class A
//{
//private:
//	int i;
//public:
//	char c;
//	void setI(int a)
//	{
//		i = a;
//	}
//	void display()
//	{
//		cout << "i =" << i << endl << "C=" << c << endl;
//	}
//};
//class B
//{
//public:
//	char c;
//	void display()
//	{
//		cout << "c= " << c << endl;
//	}
//};
//int main()
//{
//	A a;
//	B b;
//	a.c = 'e';
//	b.c = 'f';
//	a.setI(8);
//	a.display();   // i = 8 
//					//C = e;
//					//c = f;
//	b.display();
//	system("pause");
//}
#include <cmath>
//const double Pi = acos(-1);
//class Circle
//{
//private:
//	double m_r;
//public:
//	void setM_r(double a)
//	{
//		m_r = a;
//	}
//	double setM_r()
//	{
//		return m_r;
//	}
//	void getArea()
//	{
//		cout << setM_r() * setM_r() * Pi << endl;
//	}
//};
//int main()
//{
//	int a = 3;
//	Circle myCircle;
//	myCircle.setM_r(a);
//	myCircle .getArea();
//	system("pause");
//}
//#include <iomanip>
//
//class Clock{
//private:
//	int h = 0;
//	int m = 0;
//	int s = 0;
//public:
//	void setTime(int nh, int nm, int ns)
//	{
//		h = nh;
//		m = nm;
//		s = ns;
//		if (h<0 || h >23 || m <0 || m >60 || s < 0 || s>60)
//		{
//			cout << " illegal time" << endl;
//			exit(1);
//		}
//	}
//	void disPlay()
//	{
//		cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << ":" << setfill('0')
//			<< setw(2) << s << endl;
//	}
//};
//int main()
//{
//	Clock mytime;
//	mytime.setTime(2, 6, 8);
//	mytime.disPlay();
//	system("pause");
//}
//.h ����ʵ������������ຯ����ʵ��
//.c �������ö�Ӧ�Ľӿں�����ʵ�ֶ�Ӧ���ܼ���
//class A
//{
//private:
//	int i = 0;
//public:
//	A()
//	{
//		i = 0;
//		cout << "�޲�������������" << "i =" << i << endl;
//	}
//	A(int k)
//	{
//		i = k;
//		cout << "�в�������������" << "i =" << i << endl;
//	}
//};
//int main()
//{
//	A a1;
//	A a2(2);
//	system("pause");
//}
//class A
//{
//	int i = 0;
//public:
//	A(int k = 0)
//	{
//		i = k;
//		cout << "���ι��캯��������" << "i = " << i << endl;
//	}
//	~A()
//	{
//		cout << "��������������" << endl;
//	}
//	
//};
//void fun()
//{
//	A a(8);
//}
//int main()
//{
//	A a;
//	A b(2);
//	fun();
//	system("pause");
//}
//class Person
//{
//	char *namePtr;
//	bool sex;
//	int age;
//public:
//	Person(char *name, bool sex, int age);
//	~Person();
//	void display();
//};
//Person::Person(char *p, bool s, int a)
//{
//	namePtr = new char[strlen(p) + 1];
//	strcpy(namePtr, p);
//	sex = s;
//	age = a;
//};
//Person::~Person()
//{
//	delete[] namePtr;
//}
//void Person::display()
//{
//	if (sex)
//	{
//		cout << namePtr << ", �� ��" << age << "��\n";
//	}
//	else
//	{
//		cout << namePtr << ", Ů ��" << age << "��\n";
//	}
//}
//int main()
//{
//	char *p1 = { "wang fang" };
//	char *p2 = { "li si" };
//	Person person1(p1, false, 18);
//	Person person2(p2, true, 22);
//	person1.display();
//	person2.display();
//	system("pause");
//}
