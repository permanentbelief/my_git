#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

	//class Complex
	//{

	//	friend ostream &operator<<(ostream &output, const Complex &obj)
	//	{
	//		cout << "(" << obj.real << "," << obj.imag << "i" << ")" << endl;
	//		return output;
	//	}
	//public:
	//	Complex() { real = 0;	imag = 0; }
	//	Complex(double r, double i){ real = r;	imag = i; }

	//	Complex operator+(Complex &c2);       //声明重载运算符的函数

	//	void display();

	//private:
	//	double real;
	//	double imag;
	//};

	//Complex Complex::operator+(Complex &c2) //定义重载运算符的函数
	//{
	//	//	real += c2.real;      //  这样写更地道，但会破坏 *this 对象 
	//	//	imag += c2.imag;
	//	//	return *this ;
	//	Complex c3;
	//	c3.real = real + c2.real;
	//	c3.imag = imag + c2.imag;
	//	return c3;

	//}

	//void Complex::display()
	//{
	//	cout << "(" << real << "," << imag << "i)" << endl;
	//}

	//int main()
	//{
	//	Complex c1(3, 4), c2(5, -10);
	//	// 不使用重载 
	//	cout << "c1="; c1.display();
	//	cout << "c2="; c2.display();
	//	cout << "c1+c2="; (c1 + c2).display();   // 也可以新增一个对象用于存放和

	//	// 使用重载 <<  
	//	cout << "c1 = " << c1;
	//	cout << "c2 = " << c2;
	//	cout << "c1+c2 = " << c1 + c2;
	//	system("pause");
	//	return 0;
	//}

#include <iomanip>
using std::setw;

int main()
{
	const int arraySize = 10; // size of array a
	int data[arraySize] = { 56, 34, 4, 10, 77, 51, 93, 30, 5, 52 };
	int insert; // temporary variable to hold element to insert

	cout << "Unsorted array:\n";

	// output original array
	for (int i = 0; i < arraySize; i++)
		cout << setw(4) << data[i];

	// insertion sort
	// loop over the elements of the array
	for (int next = 1; next < arraySize; next++)
	{
		insert = data[next]; // store the value in the current element

		int moveItem = next; // initialize location to place element

		cout << endl << "===========================================================================" << endl;
		// search for the location in which to put the current element     
		while ((moveItem > 0) && (data[moveItem - 1] > insert))
		{
			// shift element one slot to the right

			cout << "moveItem = " << moveItem << "; data[moveItem-1] =  " << data[moveItem - 1] << " ; data[moveItem] = "
				<< data[moveItem] << "; insert = " << insert << endl;

			data[moveItem] = data[moveItem - 1];
			moveItem--;
		} // end while

		data[moveItem] = insert; // place inserted element into the array

		// Display the array elements
		cout << endl;
		cout << "--------------------------------------------------------" << endl;
		cout << setw(4) << next << "Times: " << endl << endl;

		for (int i = 0; i < arraySize; i++)
			cout << setw(4) << data[i];

	} // end for

	cout << "\nSorted array:\n";

	// output sorted array
	for (int i = 0; i < arraySize; i++)
		cout << setw(4) << data[i];

	cout << endl;
	system("pause");
	return 0; // indicates successful termination
} // end main


