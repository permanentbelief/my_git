#include <iostream>					// 预处理命令
using namespace std;					// 使用标准命名空间std
class Date
{
private:
	int year;							// 年
	int month;							// 月
	int day;								// 日
public:
	Date(int y = 1, int m = 1, int d = 1) : year(y), month(m), day(d){ }
	void SetYear(int y){ year = y; }		// 设置年 
	void SetMonth(int m){ month = m; }		// 设置月 
	void SetDay(int d){ day = d; }			// 设置日
	int GetYear() const{ return year; }	// 返回年 
	int GetMonth() const{ return month; }	// 返回月 
	int GetDay() const{ return day; }		// 返回日
	Date operator+(int days);				// 返回当前日期加上天数后得到的日期
	Date operator-(int days);				// 返回当前日期减去天数后得到的日期
	static bool IsLeapyear(int y);			// 判断年份y是否为润年
	static int GetYearDays(int y);			// 年份y的天数
	static int GetMonthDays(const Date &d);	// 日期d当前月份的天数
	static int DateToNum(const Date &d);		// 返回从公元1年1月1日起的天数
	static Date NumToDate(int n);			// 由从公元1年1月1日起的天数返回日期
};

ostream &operator<<(ostream &out, const Date &d);		// 重载输出运算符
istream &operator>>(istream &in, Date &d);				// 重载输入运算符>>

// 日期类及相关函数的实现部分
Date Date::operator+(int days)			// 返回当前日期加上天数后得到的日期
{
	int n = DateToNum(*this) + days;		// 从公元1年1月1日起的天数
	return NumToDate(n);					// 返回日期
}

Date Date::operator-(int days)			// 返回当前日期减去天数后得到的日期
{
	int n = DateToNum(*this) - days;		// 从公元1年1月1日起的天数
	return NumToDate(n);					// 返回日期
}

bool Date::IsLeapyear(int y)			// 判断年份y是否为润年
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) return true;	// 闰年
	else return false;						// 平年
}

int Date::GetYearDays(int y)			// 年份y的天数
{
	if (IsLeapyear(y)) return 366;			// 润年有366天
	else  return 365;						// 平年有366天
}

int Date::GetMonthDays(const Date &d)		// 日期d当前月份的天数
{
	int n;									// 天数

	switch (d.GetMonth())
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		n = 31;							// 第1,3,5,7,8,10,12月为大月
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		n = 31;							// 第4,6,9,11月为小月
		break;
	case 2:
		if (IsLeapyear(d.GetYear())) n = 29;	// 润年2月有29天
		else n = 28;							// 平年2月有29天
	}

	return n;								// 返回当前月份的天数
}

int Date::DateToNum(const Date &d)			// 返回从公元1年1月1日起的天数
{
	int y, n = 0;							// 年份与天数

	for (y = 1; y < d.GetYear(); y++)			// 累加从公元1年到year-1年的天数
		n += GetYearDays(y);
	for (int m = 1; m < d.GetMonth(); m++)		// 累加从公元1月到month - 1月的天数
		n += GetMonthDays(Date(y, m, 1));
	n += d.GetDay();							// 累加当前月过的天数

	return n;								// 返回天数
}

Date Date::NumToDate(int n)				// 由从公元1年1月1日起的天数返回日期
{
	int y, m, d, rest = n;					// 年,月,日和剩余天数
	for (y = 1, rest = n; rest > GetYearDays(y); y++)			// 计算年份
		rest -= GetYearDays(y);
	for (m = 1; rest > GetMonthDays(Date(y, m, 1)); m++)		// 计算月份
		rest -= GetMonthDays(Date(y, m, 1));
	d = rest;								// 日
	return Date(y, m, d);						// 返回日期
}

ostream &operator<<(ostream &out, const Date &d)	// 重载输出运算符
{
	out << d.GetYear() << "年" << d.GetMonth() << "月" << d.GetDay() << "日";
	return out;										// 返回输出流
}

istream &operator>>(istream &in, Date &d)	// 重载输入运算符>>
{
	int year, month, day;					// 年月日
	cin >> year >> month >> day;				// 输入年月日
	d = Date(year, month, day);				// 转换成日期
	return in;								// 返回输入流
}

int main()
{
	Date d(2008, 8, 18);					// 定义日期对象
	cout << "日期:" << d << endl;			// 输出日期
	cout << "日期+10:" << d + 10 << endl;		// 输出日期
	cout << "日期-10:" << d - 10 << endl;		// 输出日期
	cout << "输入日期:";
	cin >> d;							// 输出日期
	cout << "日期:" << d << endl;		// 输出日期
	system("pause");

	return 0;                    			// 返回值0, 返回操作系统
}