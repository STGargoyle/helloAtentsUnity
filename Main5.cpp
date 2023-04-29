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

SoSimple SimpleFuncObj(SoSimple ob) // ���ڷ� �����ϴ� ���
{
	cout << "return ����" << endl;
	return ob;
} // ��ü�� ��ȯ�Ҷ� �������� �ƴ� ���
// �̷��� �ΰ����� �߰������� ��������ڸ� ȣ���ϰ� ����� ����̴�.

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj), AddNum(30), ShowData();
	obj.ShowData();
	return 0;
}