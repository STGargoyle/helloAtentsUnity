#include "Default.h"

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	//SimpleClass() // �Ű������� ���� �����ڸ� ���̵� �����ڶ�� �Ѵ�.
	//{  // �����Լ� ���� ����� ���ÿ� �ʱ�ȭ �Ǹ� �����Ҵ絵 �� �� �ִ�.
	//	num1 = 0;
	//	num2 = 0;
	//}

	//SimpleClass(int n)
	//{
	//	num1 = n;
	//	num2 = 0;
	//}

	//SimpleClass(int n1, int n2)
	//{
	//	num1 = n1;
	//	num2 = n2;
	//}

	// ���� �ۼ��ϴ��� �Ʒ��� �ۼ��ϴ��� �� �� �ϳ��� ����ؾ���

	SimpleClass(int n1 = 0, int n2 = 0)
	{              // �Ű������� ����Ʈ ���� ����
		num1 = n1;
		num2 = n2;
	} // �Ű����� ��ü�� ����Ʈ���� �־��� ������ �Ű������� 1���� 2���� ���� �� ���� �����ϴ�.

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main()
{
	//SimpleClass sc1; // void ������ ȣ��� ���� �ʱ�ȭ
	//sc1.ShowData();

	//SimpleClass sc2(100); // �Ű������� 1���� ������ ȣ�� ���� �ʱ�ȭ
	//sc2.ShowData();

	//SimpleClass sc3(100, 200); // �Ű������� 2���� ������ ȣ�� ���� �ʱ�ȭ
	//sc3.ShowData();
	SimpleClass sc1();
	SimpleClass mysc = sc1();
	mysc.ShowData();

	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;
}