#include "Default.h"

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout << "객체생성" << endl;
	}
	SelfRef& Adder(int n) //참조자가 찍혀 있으면
	{
		num += n;
		return*this; // 애스터리스크를 찍는다.
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return*this;
	}
};

int main()
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber(); 
	//참조자를 썻기 때문에 사실은 obj와 ref 둘은 같은것이다.

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}