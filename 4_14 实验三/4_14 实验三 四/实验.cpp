#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class Point
//{
//	int x = 0;
//	int y = 0;
//public:
//	Point(int a, int b) :x(a), y(b){}
//	void setPoint(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	int GetY()
//	{
//		return y;
//	}
//	void display()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//int main()
//{
//	Point myPoint(3, 4);
//	//Point myPoint1(5,6);
//	////myPoint.setPoint(5,6);
//	//myPoint.display();
//	////myPoint1.setPoint(2,3);
//	//myPoint1.display();
//	system("pause");
//}
//实验三—1
//class Point
//{
//private:
//	int x = 0;
//	int y = 0;
//public:
//	Point(int a, int b) :x(a), y(b){}
//	void Set(int a, int b);
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//
//};
//void Point::Set(int a, int b)
//{
//	x = a;
//	y = b;
//}
//void Show(const Point &pt)
//{
//	cout << pt.GetX() << " " << pt.GetY() << endl;
//}
//int main()
//{
//	Point a[5] = { Point(0, 0), Point(1, 1), Point(2, 2),
//		Point(3, 3), Point(4, 4) };
//	Point*p = a;
//	p->Set(5, 9);
//	a[3].Set(6, 8);
//	for (int i = 0; i < 5; i++)//59  11 22 68 44 
//	{
//		Show(*(p++));
//	}
//	system("pause");
//}
//实验三--2
//#include <iostream>
//using namespace std;
//class  Date
//{
//	int month;
//	int year;
//	int day;
//public:
//	Date(int m = 1, int d = 1, int y = 2008); // 构造函数
//		friend void Show(const Date &dt);
//};
//Date::Date(int m, int d, int y)
//{
//	/*month = m;
//	day = d;
//	year = y;*/
//	this->month = m;
//	this->day = d;
//	this->year = y;
//}
//void Show(const Date& dt)
//{
//	cout << dt.month << "/" << dt.day <<"/" << dt.year << endl;
//}
//int main()
//{
//	Date d1(6, 8, 2008);
//	Date d2(6, 18);
//	Date d3(5);
//	Date d4;
//	Show(d1);
//	Show(d2);
//	Show(d3);//6/8/2008	//6 / 18 / 2008	//5 / 1 / 2008//1 / 1 / 2008
//	Show(d4);
//	system("pause");
//}
//实验三--3
//#include<iostream>
//using namespace std;
//class Test
//{
//private:
//	static int count ;
//	
//public:
//	Test(){  count++; }
//	static void Show()
//	{
//		cout << "共有" << count << "个对象！" << endl;
//	}
//	
//};
//  int Test :: count = 0;
//int main()
//{
//	Test obj1, obj2, obj3;
//	Test::Show();
//	system("pause");
//	return 0;
//
//}
//实验三--4
//#include <iostream>
//using namespace std;
//class Test
//{
//public:
//	 Test()
//	{
//		cout << "构造函数运行" << endl;
//	}
//	 ~Test()
//	{
//		cout << "析构函数运行" << endl;
//	}
//};
//int main()
//{
//	Test obj;
//	system("pause");
//	return 0;
//}
//实验三--5
//#include <iostream>
//using namespace std;
//class People
//{
//protected:
//	int age = 0;
//	int height = 0;
//	double weight = 0;
//	static  int num ;
//public:
//	People(int a, int h, double w)
//		:
//		age(a),
//		height(h),
//		weight(w)
//	{
//		num++;
//	}
//	
//	/*void Eatting( People & person)
//	{
//		person.weight++;
//		person.Sporting(height++);
//	}*/
//	void Eatting()
//	{
//		weight++;
//	}
//	void Sporting()
//	{
//		height++;
//	}
//	void Sleeping()
//	{
//		age++;
//		height++;
//		weight++;
//	}
//	void  Show()
//	{
//		cout << "年龄为" << age << " " << "身高为" << height <<
//			"体重为" << weight << endl;
//	}
//	static int  ShowNum()
//	{
//		return num;
//	}
//
//};
//int People::num = 0;
//int main()
//{
//	People people1(23, 65, 89);
//	People people2(56, 98, 898);
//	people1.Show();
//	people1.ShowNum();
//	people1.Sleeping();
//	people1.Sporting();
//	people1.Show();
//	cout << People::ShowNum()<<endl;
//	cout << people1.ShowNum() << endl;
//	cout << people2.ShowNum() << endl;
//	system("pause");
//
//}
#include <iostream>
#include <string>

using namespace std;
class Student
{
	string name;
	int num;
	int mathScore;
	int englishScore;
	static int count;
	static int mathTotalScore;
	static int englishTotalScore;
public:
	Student(string nm, int math, int english) :
		name(nm),
		mathScore(math),
		englishScore(english)
	{
		num++;
	}
	void ShowBase()
	{
		cout << "名字为：" << name << "数学成绩为：" << mathScore
			<< "英语成绩为：" << englishScore << endl;
	}
	void static ShowStatic()
	{
		cout << "数学总成绩" << mathTotalScore <<"英语总成绩"
			<< englishTotalScore << endl;
		
	}
	int static Shownumber()
	{
		return count;
	}
};
int main()
{
	Student s1("lihua", 44, 66);
	s1.ShowBase();
	s1.ShowStatic();
	s1.Shownumber();
	system("pause");
}
