#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//class GradeBook
//{
//public:
//	void displayMessage()const
//	{
//		cout << "Welcome to the Grade Book!" << endl;
//
//	}
//};
//int main()
//{
//	GradeBook myGradeBook;
//	myGradeBook.displayMessage();
//	system("pause");
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class GradeBook
//{
//public:
//	void displaymessage(string courseName) const
//	{
//		cout << "Weclome to the grade book for\n" << courseName << "!" << endl;
//	}
//};
//int main()
//{
//	string nameOfCourse;
//	GradeBook myGradeBook;
//	cout << " Please enter the course name" << endl;
//	getline(cin, nameOfCourse);
//	myGradeBook.displaymessage(nameOfCourse);
//	system("pause");
//
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class GradeBook 
//{
//private:
//	string coursename;
//public:
//	void setCoursename(string name) 
//	{
//		coursename = name;
//	}
//	string getCoursename() const
//	{
//		return coursename;
//	}
//	void displaymessage() const 
//	{
//		cout <<  "Weclome to the grade book for\n" << getCoursename() << "!" <<endl;
//	}
//};
//int main()
//{
//	string nameofcourse;
//	GradeBook myGradeBook;
//	cout << "Initial course name is"<< endl;
//	getline(cin, nameofcourse);
//	cout << "\nPlease enter the course name: " << endl;
//	myGradeBook.setCoursename(nameofcourse);
//	myGradeBook.displaymessage();
//	system("pause");
//
//
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class GradeBook
//{
//public:
//	explicit GradeBook(string name)
//		: courseName(name)
//	{
//		// empty body
//	}
//	void setCourse(string name)
//	{
//		courseName = name;
//	}
//	string getCourse()
//	{
//		return courseName;
//	}
//	void displayMessage()
//	{
//		cout << "Welcome to the grade book for \n" << getCourse() << "!" << endl;
//	}
//private:
//	string courseName;
//};
//int main()
//{
//	GradeBook gradeBook1("CS101 Introduction to C++ programmong");
//	GradeBook gradeBook2("CS102 Data Structures in C++");
//	cout << "gradeBook1 created for course: " << gradeBook1.getCourse()
//		<< "\ngradeBook2 created for course: " << gradeBook2.getCourse() <<
//		endl;
//	system("pause");
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cout << i << " " ;
//
//	}
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	for (unsigned int counter = 1; counter <= 10; counter++)
//	{
//		cout << counter << " ";
//	}
//	system("pause");
//}
