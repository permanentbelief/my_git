#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
void GetMemory(char *p)
{
	p = new char[100];
}
int main(void)
{
	char *str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	cout << str;
	return 0;
}
#include <iostream>
using namespace std;
void GetMemory(char **p)
{
	*p = new char[100];
}
int main()
{
	char *str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	cout << str;
	return 0;
}
#include <iostream>
using namespace std;
char* GetMemory()
{
	char p[5] = { 'a', 'b', 'c', 'd', '\0' };
	return p;
}
int main(void)
{
	char *str = NULL;
	str = GetMemory();
	cout << str;
	return 0;
}