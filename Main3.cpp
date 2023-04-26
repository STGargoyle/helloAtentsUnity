#include "Default.h"

class TwoNumber
{
private:
	int num1;
	int num2;
public: // 멤버변수와 매개변수가 같다.
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1; // 멤버변수가 같다는 선언을 해주는 것
		this->num2 = num2; // 즉 디스에 멤버변수가 포함된다는 것
	}
	/*TwoNumber(int num1, int num2)
		:num1(num1),num2(num2)
	{ // 이니셜라이즈를 활용할수도 있으나 위가 더 빠르다.
	  // 정수나 실수라면 이렇게 적는게 더 낫다.
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