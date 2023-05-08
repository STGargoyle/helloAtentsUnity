#include"Default.h"

class SoSimple
{
private:
	int num1;
	mutable int num2;
	// 한시적으로 const를 무력화시킨다. 하지만 그게 단점이다.
public:
	SoSimple(int n1, int n2) :num1(n1), num2(n2)
	{	}
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const
	{
		num2 = num1;
	}
};

int main()
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();
	return 0;
}