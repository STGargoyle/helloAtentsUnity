#include "Default.h"

class SoSimple
{
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "num=" << num << ", ";
		cout << "address+" << this << endl;
	}

	void ShowSimpleData()
	{
		cout << num << endl;
	}
	
	SoSimple*GetThisPointer() // �����͸� ����� ������
	{
		return this; // �ּҰ� ��ȯ
	}
};

int main()
{
	SoSimple sim1(100); // 100�� �ְ� �ּҰ��� ���� ��,
	SoSimple* ptr1 = sim1.GetThisPointer(); // �ּҰ��� �ְ� �ּҰ��� �޴´�.
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData(); // �׸��Ͽ� �ּҰ� ���´�.

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}