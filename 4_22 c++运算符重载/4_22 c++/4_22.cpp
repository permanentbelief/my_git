#define _CRT_SECURE_NO_WARNINGS 1 
//���������
//#include <iostream>
//using namespace std;
//class Box {
//
//public:
//	double getVolume()
//	{
//		return length*width*height;
//	}
//	void setLength(double len)
//	{
//		this->length = len;
//	}
//	void setWidth(double width)
//	{
//		this->width = width;
//	}
//	void setHeight(double height)
//	{
//		//this->setHeight = height;
//		this-> height = height;
//	}
//	// ���� Box+Box
//	Box operator+(const Box b)
//	{
//		Box box_;
//		box_.length = length + b.length;
//		box_.height = height + b.height;
//		box_.width = width + b.width;
//		return box_;
//	}
//	// ����Box - Box ;
//	Box operator-(const Box b)
//	{
//		Box box_;
//		box_.length = length - b.length;
//		box_.height = height - b.height;
//		box_.width = width - b.width;
//		return box_;
//	}
//private:
//	double length;
//	double width;
//	double height;
//};
//int main()
//{
//	Box a;
//	a.setHeight(5);
//	a.setLength(5);
//	a.setWidth(2);
//	cout << a.getVolume() << endl;
//	Box b;
//	b.setHeight(5);
//	b.setLength(5);
//	b.setWidth(5);
//	cout << b.getVolume() << endl;
//	Box c;
//	c = a + b;
//	cout << c.getVolume() << endl;
//	Box d;
//	d = b - a;
//	cout << d.getVolume() << endl;
//	system("pause");
//}
// ��Ԫ��������˫Ŀ�����(+)
//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//	friend void operator++(Point & point);
//	void showPoint();
//};
//void operator++(Point & point)
//{
//	point.x++;
//	point.y++;
//}
//void Point::showPoint()
//{
//	cout << "(" << x << "," << y << ")" << endl;
//}
//int main()
//{
//	Point point(10, 10);
//	point.showPoint();
//	point++;//����һ
//	++point;
//	operator++(point);//������
//	point.showPoint();
//	system("pause");
//	return 0;
//}
