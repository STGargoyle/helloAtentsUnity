#include "Default.h"

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};
	
class BBB
{
private:
	AAA& ref; // ������
	const int& num; // ��� 
	// �Ѵ� ����� ���ÿ� �ʱ�ȭ �ؾ��ϱ� ������ �Ʒ��ʿ��� �̴ϼȶ������ �ʱ�ȭ�� �����.
public:
	BBB(AAA &r, const int &n)
		:ref(r), num(n) // ��� �̴ϼȶ������ �ʱ�ȭ
	{
		// ref = r; �̷����� �ۼ��ϸ� �̴ϼȶ������ ��ġ�Ǿ ������ ����.
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num " << num << endl;
	}
};

int main()
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}