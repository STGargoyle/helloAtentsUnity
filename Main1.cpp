#include"Default.h"

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const // 함수 뒤에 const가 추가 되면 멤버 변수가 변하면 안된다
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

int main()
{
	SoSimple obj1(2);
	const SoSimple obj2(7);
	obj1.SimpleFunc();
	obj2.SimpleFunc();
	YourFunc(obj1);
	YourFunc(obj2);
	return 0;
}