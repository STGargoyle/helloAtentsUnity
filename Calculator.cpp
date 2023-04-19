#include <iostream>
#include <cstdlib>
using namespace std;

class Calculator
{
private:
	int addCnt;
	int minCnt;
	int mulCnt;
	int divCnt;

public:
	void Init()
	{
		addCnt = 0;
		minCnt = 0;
		mulCnt = 0;
		divCnt = 0;
	}
	float Add(float a, float b)
	{
		addCnt++;
		return a + b;
	}
	float Min(float a, float b)
	{
		minCnt++;
		return a - b;
	}
	float Mul(float a, float b)
	{
		mulCnt++;
		return a * b;
	}
	float Div(float a, float b)
	{
		divCnt++;
		return a / b;
	}
	void ShowOpCount()
	{
		cout << "µ¡¼À: " << addCnt << " »¬¼À: " << minCnt <<
			" °ö¼À: " << mulCnt << " ³ª´°¼À: " << divCnt << endl;
	}
};

int main()
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}