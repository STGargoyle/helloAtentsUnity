#include"Default.h"

class SoSimple
{
private:
	int num1;
	int num2;

public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{ }

	SoSimple(const SoSimple& copy)
		:num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}// 이 부분은 어차피 디폴트 값이기 때문에 없어도 상관없이 작동한다.
	// 왜냐면 C++에서는 생성자, 복사생성자, 소멸자가 디폴트값이기 때문이다.

	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main()
{
	SoSimple sim1(15, 20);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1; // sim2가 sim1으로 초기화되면서 복사생성자가 생긴다.
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();
	return 0;
}