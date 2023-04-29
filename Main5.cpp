#include"Default.h"

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) :num(n)
	{	}
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

//void SimpleFuncObj(SoSimple ob)
//{
//	ob.ShowData();
//}

SoSimple SimpleFuncObj(SoSimple ob) // 인자로 전달하는 경우
{
	cout << "return 이전" << endl;
	return ob;
} // 객체를 반환할때 참조형이 아닌 경우
// 이렇게 두가지가 추가적으로 복사생성자를 호출하게 만드는 경우이다.

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj), AddNum(30), ShowData();
	obj.ShowData();
	return 0;
}