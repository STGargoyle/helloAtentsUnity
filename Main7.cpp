#include"Default.h"

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) :num(n)
	{
		cout << "생성자: " << this << endl;
	}
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "복사 생성자: " << this << endl;
	}
	~SoSimple()
	{
		cout << "소멸자: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;
	return ob;
}

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj: " << &tempRef << endl;
	return 0;
}