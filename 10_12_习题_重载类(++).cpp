#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
class Point
{
private:
	int _x = 0;
	int _y = 0;
public:
	Point(int x = 100, int y = 100){ _x = x; _y = y; }

	Point& operator++();//ǰ��++
	Point operator++(int);//���� ++

	Point& operator--();//ǰ��--
	Point operator--(int);//����--

	friend ostream &operator<<(ostream&, const Point&);
	friend istream &operator>>(istream&, Point&);
};
ostream &operator<<(ostream& output, const Point&xx)
{
	output << "Point XX is:(" << xx._x << "," << xx._y << ")" << endl;
	return output;
}
istream &operator>>(istream& input, Point&xx)
{
	cout << "Input x:";
	input >> xx._x;
	cout << "Input y:";
	input >> xx._x;
	return input;
}
Point & Point::operator++()
{
	_x++;
	_y++;
	return *this;
}
Point Point::operator++(int)
{
	Point temp = *this;
	++*this;
	return temp;

}
Point & Point::operator--()
{
	_x--;
	_y--;
	return *this;
}
Point Point::operator--(int)
{
	Point temp = *this;
	--*this;
	return temp;
}
int main()
{
	Point A;
	cout << "A��ֵΪ��" << A << endl;
	cin >> A;
	cout << "A��ֵΪ��" << A << endl;

	cout << "++A��ֵΪ��" <<++A << endl;
	cout << "A++��ֵΪ��" << A++ << endl;
	cout << "A��ֵΪ��" << A << endl;
	
	cout << "--A��ֵΪ��" << --A << endl;
	cout << "A--��ֵΪ��" << A-- << endl;
	cout << "A��ֵΪ��" << A << endl;
	system("pause");


}