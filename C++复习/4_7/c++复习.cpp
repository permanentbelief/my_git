//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//#include "Date.h"
//int main()
//{
//	Date date1(7, 4, 2004);
//	Date date2;
//	cout << "date1= ";
//	date1.print();
//	cout << "\ndate2= ";
//	date2.print();
//	date2 = date1;
//	cout << "\ndate2 = ";
//	date2.print();
//	system("pause");
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout << "���캯��" << endl;
//	}
//	~A(){
//
//		cout << "��������" << endl;
//	}
//};
//int main()
//{
//	A a;
//	   A *p = new A();
//	delete p;
//	cout << "end of main" << endl;//������Ĭ��ִ�����������������ڲ�����ʾ
//	system("pause");
//	return 0;
//}

//�������
//Constructing an object of A
//Constructing an object of A
//Destructing an object of A
//Destructing an object of A
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout << " Constructing an object of A " << endl;
//	}
//	~A()
//	{
//		cout << " Destructing an object of A " << endl;
//	}
//};
//int main()
//{
//	A a;
//	A b;
//	system("pause");
//	return 0;
//
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class Stu
//{
//private :
//	string name;
//	int n = 0;
//public:
//	void set_Stu(string stu_name, int stu_grade)
//	{
//		name = stu_name;
//		n = stu_grade;
//	}
//	string get_name()
//	{
//		return name;
//	}
//	int get_grade()
//	{
//		return n;
//	}
//};
//void Max(Stu *A)
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		if (A[i].get_grade() > m)
//		{
//			m = A[i].get_grade();
//			n = i;
//		}
//	}
//	cout << A[n].get_name() << " " << m << endl;
//}
//int main()
//{
//	Stu s[6];
//	string student_name;
//	int student_grade;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		cin >> student_name >> student_grade;
//		s[i].set_Stu(student_name, student_grade);
//	}
//	Max(s);
//	system("pause");
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class Stu{
//private:
//	string name;
//	int  grade = 0;
//public:
//	void set_Stu(string Stu_name, int Stu_grade)
//	{
//		name = Stu_name;
//		grade = Stu_grade;
//	}
//	string get_name()
//	{
//		return name;
//	}
//	int get_grade()
//	{
//		return grade;
//	}
//	void print()
//	{
//		cout << name << " " << grade << endl;
//
//	}
//};

//int main()
//{
//
//	int n = 0;
//	int i = 0;
//	string name1;
//	int grade1;
//	cin >> n;
//	Stu s[1000];
//	for (i = 0; i < n; i++)
//	{
//		cin >> name1 >> grade1;
//		s[i].set_Stu(name1, grade1);
//	}
//	for (i = 0; i < n; i++)
//	{
//		//s[i].set_Stu(name1, grade1);
//		s[i].print();
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
////������Ķ����������ط���
////�ڴ˴��������������ʹ�ó���Ҫ�����������
//
//inline int max(int a, int b)
//{
//	return (a > b ? a : b);
//}
//int main()
//{
//	cout << max(3, 4) << endl;
//	cout << max(6, 5) << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
////������Ķ����������ط���
////�ڴ˴�������غ�����ʹ�ó���Ҫ�����������
//int max(int a, int b)
//{
//	cout << "int compare " ;
//	return a > b ? a : b;
//}
//double max(double a, double b)
//{
//	cout << "double compare ";
//	return a > b ? a : b;
//}
//
//int main()
//{
//	cout << max(4, 5) << endl;
//	cout << max(45.23, 2.3) << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
////�������޸���������
////�ڴ˴�������main����������Box��
////ʹ�������Ҫ�� 
//class Box{
//public:
//
//	
//	void setLength(int Length)
//	{
//		length = Length;
//	}
//	void setBreadth(int Breadth)
//	{
//		breadth = Breadth;
//	}
//	void setHeight(int Height)
//	{
//		height = Height;
//	}
//	double getVolume()
//	{
//		return  height*breadth*length;
//	}
//
//
//private:
//
//	double length;
//	double breadth;
//	double height;
//
//
//};
//int main()
//{
//	Box Box1;                // ���� Box1������Ϊ Box
//	Box Box2;                // ���� Box2������Ϊ Box
//	double volume = 0.0;     // ���ڴ洢���
//
//	// box 1 ����
//	Box1.setLength(6.0);
//	Box1.setBreadth(7.0);
//	Box1.setHeight(5.0);
//
//	// box 2 ����
//	Box2.setLength(12.0);
//	Box2.setBreadth(13.0);
//	Box2.setHeight(10.0);
//
//	// box 1 �����
//	volume = Box1.getVolume();
//	cout << "Box1 �������" << volume << endl;
//
//	// box 2 �����
//	volume = Box2.getVolume();
//	cout << "Box2 �������" << volume << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream> 
//using namespace std;
//
//class Max
//{
//public:
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	void set(int m, int n, int o)
//	{
//		a = m;
//		b = n;
//		c = o;
//	}
//	//���ݳ�Աa,b,c
//	//��Ա����max(a,b,c)  
//	//���û��ȡa,b,cֵ�ĺ��� 
//	int  max(int m, int n, int o)
//	{
//		int max = m;
//		if (m < n)
//		{
//			max = n;
//		}
//		if (n < o)
//		{
//			max = o;
//		}
//		return max;
//	}
//
//};
//
//int main()
//{
//
//	//��������
//	//�ö���ȥ���ó�Ա����
//	Max m;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cin >> a >> b >> c;
//	int ret = m.max(a, b, c);
//	cout << ret;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
////���г�Ա������SetPoint(int, int)�������õ�����ֵ��ShowPoint()���������������Ϣ
//class Point
//{
//private:
//	int x = 0;
//	int y = 0;
//public:
//	void SetPoint(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//	void ShowPoint()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main()
//{
//	Point mypoint;
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	mypoint.SetPoint(a, b);
//	mypoint.ShowPoint();
//	system("pause");
//	return 0;
//
//}
/*������Time��Time��3�����õ����ݳ�Աhour��min��sec�ֱ��ʾСʱ���֡��롣
��������main�ж���Time�����t1����������main������t1�ĸ����ݳ�Ա�ٲ���������ݳ�Ա��

����
����������3�����ݳ�Աhour��min��sec��

���
���������3�����ݳ�Աhour��min��sec��*/
#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
public:
	int hour = 0;
	int minute = 0;
	int second = 0;
	void set_hour(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	}
	void display()
	{
		/*hour = (hour < 12 ? hour : hour % 12);
		minute = (minute < 60 ? minute : minute % 60);
		second = (second < 60 ? second : second % 60);*/
		if (hour > 12)
			hour = 12;
		if (minute > 60)
			minute = 0;
		if (second > 60)
			second = 0;
		cout << setfill('0') << setw(2) << hour << ":" << setfill('0')
			<< setw(2) << minute << ":" << setfill('0')<<setw(2) << second;
	}
};
int main()
{
	Time t;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	t.set_hour(a, b, c);
	t.display();
	system("pause");

}