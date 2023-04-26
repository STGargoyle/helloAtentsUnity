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
	AAA& ref; // 참조자
	const int& num; // 상수 
	// 둘다 선언과 동시에 초기화 해야하기 때문에 아래쪽에서 이니셜라이즈로 초기화를 해줬다.
public:
	BBB(AAA &r, const int &n)
		:ref(r), num(n) // 멤버 이니셜라이즈로 초기화
	{
		// ref = r; 이런식을 작성하면 이니셜라이즈랑 대치되어서 에러가 난다.
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