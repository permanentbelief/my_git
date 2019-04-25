#include <iostream>					// Ԥ��������
using namespace std;					// ʹ�ñ�׼�����ռ�std
class Date
{
private:
	int year;							// ��
	int month;							// ��
	int day;								// ��
public:
	Date(int y = 1, int m = 1, int d = 1) : year(y), month(m), day(d){ }
	void SetYear(int y){ year = y; }		// ������ 
	void SetMonth(int m){ month = m; }		// ������ 
	void SetDay(int d){ day = d; }			// ������
	int GetYear() const{ return year; }	// ������ 
	int GetMonth() const{ return month; }	// ������ 
	int GetDay() const{ return day; }		// ������
	Date operator+(int days);				// ���ص�ǰ���ڼ���������õ�������
	Date operator-(int days);				// ���ص�ǰ���ڼ�ȥ������õ�������
	static bool IsLeapyear(int y);			// �ж����y�Ƿ�Ϊ����
	static int GetYearDays(int y);			// ���y������
	static int GetMonthDays(const Date &d);	// ����d��ǰ�·ݵ�����
	static int DateToNum(const Date &d);		// ���شӹ�Ԫ1��1��1���������
	static Date NumToDate(int n);			// �ɴӹ�Ԫ1��1��1�����������������
};

ostream &operator<<(ostream &out, const Date &d);		// ������������
istream &operator>>(istream &in, Date &d);				// �������������>>

// �����༰��غ�����ʵ�ֲ���
Date Date::operator+(int days)			// ���ص�ǰ���ڼ���������õ�������
{
	int n = DateToNum(*this) + days;		// �ӹ�Ԫ1��1��1���������
	return NumToDate(n);					// ��������
}

Date Date::operator-(int days)			// ���ص�ǰ���ڼ�ȥ������õ�������
{
	int n = DateToNum(*this) - days;		// �ӹ�Ԫ1��1��1���������
	return NumToDate(n);					// ��������
}

bool Date::IsLeapyear(int y)			// �ж����y�Ƿ�Ϊ����
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) return true;	// ����
	else return false;						// ƽ��
}

int Date::GetYearDays(int y)			// ���y������
{
	if (IsLeapyear(y)) return 366;			// ������366��
	else  return 365;						// ƽ����366��
}

int Date::GetMonthDays(const Date &d)		// ����d��ǰ�·ݵ�����
{
	int n;									// ����

	switch (d.GetMonth())
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		n = 31;							// ��1,3,5,7,8,10,12��Ϊ����
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		n = 31;							// ��4,6,9,11��ΪС��
		break;
	case 2:
		if (IsLeapyear(d.GetYear())) n = 29;	// ����2����29��
		else n = 28;							// ƽ��2����29��
	}

	return n;								// ���ص�ǰ�·ݵ�����
}

int Date::DateToNum(const Date &d)			// ���شӹ�Ԫ1��1��1���������
{
	int y, n = 0;							// ���������

	for (y = 1; y < d.GetYear(); y++)			// �ۼӴӹ�Ԫ1�굽year-1�������
		n += GetYearDays(y);
	for (int m = 1; m < d.GetMonth(); m++)		// �ۼӴӹ�Ԫ1�µ�month - 1�µ�����
		n += GetMonthDays(Date(y, m, 1));
	n += d.GetDay();							// �ۼӵ�ǰ�¹�������

	return n;								// ��������
}

Date Date::NumToDate(int n)				// �ɴӹ�Ԫ1��1��1�����������������
{
	int y, m, d, rest = n;					// ��,��,�պ�ʣ������
	for (y = 1, rest = n; rest > GetYearDays(y); y++)			// �������
		rest -= GetYearDays(y);
	for (m = 1; rest > GetMonthDays(Date(y, m, 1)); m++)		// �����·�
		rest -= GetMonthDays(Date(y, m, 1));
	d = rest;								// ��
	return Date(y, m, d);						// ��������
}

ostream &operator<<(ostream &out, const Date &d)	// ������������
{
	out << d.GetYear() << "��" << d.GetMonth() << "��" << d.GetDay() << "��";
	return out;										// ���������
}

istream &operator>>(istream &in, Date &d)	// �������������>>
{
	int year, month, day;					// ������
	cin >> year >> month >> day;				// ����������
	d = Date(year, month, day);				// ת��������
	return in;								// ����������
}

int main()
{
	Date d(2008, 8, 18);					// �������ڶ���
	cout << "����:" << d << endl;			// �������
	cout << "����+10:" << d + 10 << endl;		// �������
	cout << "����-10:" << d - 10 << endl;		// �������
	cout << "��������:";
	cin >> d;							// �������
	cout << "����:" << d << endl;		// �������
	system("pause");

	return 0;                    			// ����ֵ0, ���ز���ϵͳ
}