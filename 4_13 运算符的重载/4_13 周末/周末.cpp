#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace  std;
///*int  main()
//{
//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int *p = arr;
//for (int i = 0; i < 10; i++)
//{
//p[i] = 0;
//cout <<  " "<<arr[i] ;
//
//}
//system("pause");
//}*/
////class Complex
////{
////	friend ostream &operator<<(ostream &output, const Complex &obj)
////	{
////		cout << "(" << obj.real << "," << obj.imag << "i" << ")" << endl;
////		return output;
////	}
////public :
////	Complex() { real = 0, imag = 0; }
////	Complex(double r, double i){ real = r, imag = i; }
////	Complex operator+(Complex& c2);
////	void display();
////private:
////	double real;
////	double imag;
////	//friend istream operator >>(istream &input ,Complex &)
////};
////Complex Complex::operator+(Complex &c2)
////{
////	Complex c3;
////	c3.real = real + c2.real;
////	c3.imag = imag + c2.imag;
////	return c3;
////
////}
////void Complex::display()
////{
////	cout << "(" << real << "," << imag << "i)" << endl;
////}
////int main()
////{
////	Complex c1(3,4);
////	c1.display();
////	Complex c2(1.6,5.9);
////	c2.display();
////	(c1 + c2).display();
////	cout << c1;
////	cout << (c1 + c2);
////	
////	system("pause");
////}			
////#include <string>
////class student 
////{
////	
////	friend ostream &operator<<(ostream &out, const student &c)
////	{
////		out << c.country << c.name << c.grade << endl;
////		return out;
////	}
////	friend istream  &operator >> (istream &is, student &stu)
////	{
////		is >> stu.name >> stu.grade >> stu.country;
////		return is;
////	}
////public:
////	student(){}
////	
////	student (string name1 ,int grade1 , string country1)
////	{
////		this->name = name1;
////		this->grade = grade1;
////		this->country = country1;
////		
////	}
////private:
////	string name;
////	int grade;
////	string country;
////};
////int main()
////{
////	student s("xiaoMing", 15, "China");
////	student t;
////	cin >> t;
////	cout << s << endl;
////	cout << t << endl;
////	system("pause");
////	return 0;
////}
//class complex
//{
//	friend ostream& operator<<(ostream& out, const complex&ccc)
//	{
//		out << ccc.real << "+" << ccc.imag << "i" << endl;
//		return out;
//	}
//	friend complex operator+(complex &ccc, complex&ddd)
//	{
//		cout << "重载'+’运算符开始运行" << endl;
//		complex bbb;
//		bbb.real = ccc.real + ddd.real;
//		bbb.imag = ccc.real + ddd.imag;
//		return bbb;
//	}
//public:
//	complex();
//	complex(int rrr, int iii)
//	{
//		real = rrr;
//		imag = iii;
//		cout << "全参数构造函数运行" << "(" << real << ","
//			<< imag << ")" << endl;
//	}
//	complex(complex &ccc)
//	{
//		real = ccc.real;
//		imag = ccc.imag;
//		cout << "拷贝构造函数运行" << "(" << real << ","
//			<< imag << ")" << endl;
//	}
//	int getreal(complex &ccc)
//	{
//		return ccc.real;
//	}
//	int getimag(complex &ccc)
//	{
//		return ccc.imag;
//	}
//	
//	//~complex()
//	//{
//	//	cout << "析构函数开始运行……" << "(" << real << ","
//	//		<< imag << ")" << endl;
//	//}
//
//	complex & operator+=(const complex&ccc)
//	{
//		cout << "重载'+=’运算符开始运行" << endl;
//		real += ccc.real;
//		imag += ccc.imag;
//		return *this;
//	}
//	complex  operator-(const complex&ccc)
//	{
//		cout << "重载'-'运算符开始运行" << endl;
//		complex c;
//		c.real = real - ccc.real;
//		c.imag = imag - ccc.imag;
//		return c;
//	}
//
//private:
//	int real;
//	int imag;
//	
//};
//int main()
//{
//	complex aaa(5, 6);
//
//	complex bbb(2, 2);
//
//	complex ccc;
//	ccc = aaa + bbb;
//
//	cout << aaa;
//	cout << bbb;
//	cout << ccc;
//	cout << "==============" << endl;
//
//	aaa = aaa + bbb;
//	cout << aaa;
//	cout << "==============" << endl;
//
//	aaa += bbb;
//	cout << aaa;
//	cout << "==============" << endl;
//
//	ccc = aaa - bbb;
//	cout << aaa;
//	cout << ccc;
//	cout << "==============" << endl;
//
//	aaa = aaa - bbb;
//	cout << aaa;
//	cout << "==============" << endl;
//	system("pause");
//	return 0;
//
//}
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class PhoneNumber
{
	friend ostream &operator<<(ostream &output, const PhoneNumber &number)
	{
		output << "(" << number.areaCode << ") "
	     << number.exchange << "-" << number.line;
		 return output; // enables cout << a << b << c;                

	}
	friend istream &operator>>(istream &input,  PhoneNumber &number)
	{
		input.ignore();//skip (
		input >> setw(3) >> number.areaCode;
		input.ignore(2);
		input >> setw(3) >> number.exchange;
		input.ignore();
		input >> setw(4) >> number.line;
		return input;
	}
private:
	string areaCode;
	string exchange;
	string line;
};
int main()
{
	PhoneNumber phone;
	cin >> phone;
	cout << phone << endl;
	system("pause");
}