#include "Default.h"

class TwoNumber
{
private:
	int num1;
	int num2;
public: // ��������� �Ű������� ����.
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1; // ��������� ���ٴ� ������ ���ִ� ��
		this->num2 = num2; // �� �𽺿� ��������� ���Եȴٴ� ��
	}
	/*TwoNumber(int num1, int num2)
		:num1(num1),num2(num2)
	{ // �̴ϼȶ���� Ȱ���Ҽ��� ������ ���� �� ������.
	  // ������ �Ǽ���� �̷��� ���°� �� ����.
	}*/

	void ShowTwoNumber()
	{
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main()
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}