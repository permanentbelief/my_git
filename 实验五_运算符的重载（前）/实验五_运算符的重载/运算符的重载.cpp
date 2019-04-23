#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//
//class Array
//{
//private:
//	int * elem;//数组元素储存空间
//	int size;//数组元素个数
//public:
//	Array(int a[], int sz) :elem(a), size(sz){} //构造函数
//	int GetSize(){ return size; }// 返回数组元素
//	int &operator [](int pos){ return elem[pos - 1]; }
//};
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//	Array obj(a, 5);
//	//a[1] = 8;
//	obj[1] = 8;
//	for (int i = 1; i <= obj.GetSize(); i++)
//	{
//		cout << obj[i] << " ";
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Complex // 负数类
//{
//private:
//	double realPart;// 实部
//	double imagePart; //虚部
//public:
//	Complex(double real = 0, double image = 0) :realPart(real), imagePart(image){}
//	double GetRealPart() const{ return realPart; }
//	double GetImagPart() const { return imagePart; }
//	const Complex  &operator+(const Complex &a) const
//	{
//		Complex b;
//		b.realPart = this->realPart + a.realPart;
//		b.imagePart = this->imagePart + a.imagePart;
//		return b;
//	}
//
//};
//int main()
//{
//	Complex a(1, 2);
//	Complex b(2, 6);
//	Complex c;
//	c = a + b;
//	cout << "a=" << a.GetRealPart() << "+" << a.GetImagPart() << "i" << endl;
//	cout << "b=" << b.GetRealPart() << "+" << b.GetImagPart() << "i" << endl;
//	cout << "c=" << c.GetRealPart() << "+" << c.GetImagPart() << "i" << endl;
//	system("pause");
//
//}
//1.什么时候用 friend？
//2.为什么有的运算符重载不用&？
//#include <iostream>
//using namespace std;
//
//class Integer
//{
//private:
//	int val;
//public:
//	Integer(){ val = 0; } //无参构造函数
//	Integer(int v = 0){ val = v; }//带参构造函数
//	void Show() { cout << val << endl; }
//};
//
//int main()
//{
//	Integer a(2);
//	Integer b(0);
//	a.Show();
//	b.Show();
//	system("pause");
//	return 0;
//}
#include <iostream>
using namespace std;

class Complex
{
	friend Complex operator+(double d, const Complex &c);
	friend Complex operator-(double d, const Complex &c);
	double m_fReal = 0;
	double m_fImag = 0;
public:
	Complex(const double &r = 0, const double &i = 0) :m_fReal(r), m_fImag(i)
	{

	}
	Complex(const Complex &c) :m_fReal(c.m_fReal), m_fImag(c.fImag)
	{

	}
	double GetReal
};
Complex operator+(double d, const Complex &c)
{
	return Complex(d + c.m_fReal, c.m_fImag);
}
Complex operator-(double d, const Complex &c)
{
	return Complex(d - c.m_fReal, -c.m_fImag);
}