#include "Default.h"

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	//SimpleClass() // 매개변수가 없는 생성자를 보이드 생성자라고 한다.
	//{  // 메인함수 에서 선언과 동시에 초기화 되면 동적할당도 할 수 있다.
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

	// 위로 작성하던지 아래로 작성하던지 둘 중 하나만 사용해야함

	SimpleClass(int n1 = 0, int n2 = 0)
	{              // 매개변수에 디폴트 값을 넣음
		num1 = n1;
		num2 = n2;
	} // 매개변수 자체를 디폴트값을 넣었기 때문에 매개변수가 1개든 2개든 없든 다 적용 가능하다.

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main()
{
	//SimpleClass sc1; // void 생성자 호출과 동시 초기화
	//sc1.ShowData();

	//SimpleClass sc2(100); // 매개변수가 1개인 생성자 호출 동시 초기화
	//sc2.ShowData();

	//SimpleClass sc3(100, 200); // 매개변수가 2개인 생성자 호출 동시 초기화
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