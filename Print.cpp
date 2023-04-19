#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class Printer
{
private:
	char str[100];

public:
	void SetString(const char* pstr)
	{
		strcpy_s(str, sizeof(str), pstr);
	}
	void ShowString()
	{
		cout << str << std::endl;
	}
};

int main()
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}