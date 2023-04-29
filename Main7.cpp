#include"Default.h"

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) :num(n)
	{
		cout << "������: " << this << endl;
	}
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "���� ������: " << this << endl;
	}
	~SoSimple()
	{
		cout << "�Ҹ���: " << this << endl;
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