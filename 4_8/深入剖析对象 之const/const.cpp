#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//#include <iomanip>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	for (i = 1; i <= 10; i++)
//	{
//		cout << setw(10) << (1 + rand() % 6) ;
//
//		if (i % 5 == 0)
//		{
//			cout << '\n';
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <cstdlib>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));
//	unsigned int frequency1 = 0;
//	unsigned int frequency2 = 0;
//	unsigned int frequency3 = 0;
//	unsigned int frequency4 = 0;
//	unsigned int frequency5 = 0;
//	unsigned int frequency6 = 0;
//	int i = 0;
//	for (unsigned int roll = 1; roll <= 6000000; roll++)
//	{
//		unsigned int face = 1 + rand() % 6;
//		switch (face)
//		{
//		case 1:
//			frequency1++;
//			break;
//		case 2:
//			frequency2++;
//			break;
//		case 3:
//			frequency3++;
//			break;
//		case 4:
//			frequency4++;
//			break;
//		case 5:
//			frequency5++;
//			break;
//		case 6:
//			frequency6++;
//			break;
//		};
//	}
//	cout << "Face" << setw(13) << "Frequency" << endl;
//	cout << "   1" << setw(13) << frequency1;
//	cout << "\n   2" << setw(13) << frequency2;
//	cout << "\n   3" << setw(13) << frequency3;
//	cout << "\n   4" << setw(13) << frequency4;
//	cout << "\n   5" << setw(13) << frequency5;
//	cout << "\n   6" << setw(13) << frequency6 << endl;
//	system("pause");
//
//
//}
//#include <iostream>
//#include <iomanip>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//	int seed = 0;
//	cin >> seed;
//	cout << "\n";
//	srand(seed);
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		cout << " " << 1 + rand() % 6;
//		if (i % 5 == 0)
//			cout << "\n";
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>					// Ԥ��������
//using namespace std;					// ʹ�ñ�׼�����ռ�std
//// ֱ��������
//class Point
//{
//private:
//	int x, y;							// ��������������
//public:
//	Point(int a, int b) : x(a), y(b)
//	{ }		// ���캯��
//	void Set(int a, int b);				// ��������ֵ
//	int GetX() const{ return x; }		// ���غ�����
//	int GetY() const{ return y; }		// ����������
//};
//
//// ֱ�������༰��غ�����ʵ�ֲ���
//void Point::Set(int a, int b)				// ��������ֵ
//{
//	x = a;							// ������
//	y = b;							// ������
//}
//
//void Show(const Point &pt)				// ��ʾ����ֵ
//{
//	cout << pt.GetX() << "  " << pt.GetY() << endl;
//}
//
//int main(void)							// ������main(void)
//{
//	Point a[5] = { Point(0, 0), Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4) };
//	// �ɶ�����ɵ�����
//	Point *p = a;						// pָ������a
//	p->Set(5, 9);						// ��������ֵ
//	a[3].Set(6, 8);					// ��������ֵ
//	for (int i = 0; i < 5; i++)
//	{
//		// ������ʾ�����������ֵ
//		Show(*p++);
//	}
//	system("pause");
//	return 0;                    			// ����ֵ0,���ز���ϵͳ
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Point
//{
//public:
//	Point(int a, int b) :
//		x(a), y(b)
//	{}
//	int GetX() const //�˴��������const ���ܱ�ȫ�ֺ���set����
//	{
//		return x;
//	}
//	int GetY() const // �˴�������� const  ���ܱ�ȫ�ֺ���Set����
//	{
//		return y;
//	}
//	void Set(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//private:
//	int x = 0;
//	int y = 0;
//};
//
//	void display(const Point &pt)
//	{
//		cout << pt.GetX() << " " << pt.GetY() << endl;
//	}
//	int main()
//	{
//		Point a[5] = { Point(0, 0), Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4) };
//		Point *p = a;
//		p->Set(5, 9);
//		a[3].Set(6, 6);
//		for (int i = 0; i < 5; i++)
//		{
//			display(*p++);
//
//		}
//		system("pause");
//	}
#include <iostream>						// Ԥ��������
using namespace std;						// ʹ�ñ�׼�����ռ�std

// ������
class Date
{
private:
	int month, day, year;						
public:
	Date(int m = 1, int d = 1, int y = 2008);
	// ��Ԫ
	friend void Show( Date &dt);			
};


Date::Date(int m, int d, int y)				
{
	this->month = m;							// ��
	this->day = d;					     		// ��
	this->year = y;							// ��
}

void Show(  Date &dt)						
{
	cout << dt.month << "/" << dt.day << "/" << dt.year << endl;
}

int main(void)								
{
	Date d1(6, 8, 2008), d2(6, 18), d3(5), d4;
	Show(d1);									
	Show(d2);									
	Show(d3);									
	Show(d4);								
	system("pause");
	return 0;                    			
}