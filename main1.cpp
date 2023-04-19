#include<iostream>
#include<cstdlib>
using namespace std;

namespace CAR_CONST
{
	enum
	{ // 아래와 같이 작성할 수도 있지만 만약 자리를 너무 많이 차지한다면 
	  // 이와 같이 따로 작성해도 된다.
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{   // 멤버 변수
	//enum
	//{ // #define은 c언어에서 쓰던 매크로 전역함수의 상수 이기 때문에 
	//  // c++,c#에서는 이와 같이 enum을 활용한다.
	//	ID_LEN = 20,
	//	MAX_SPD = 200,
	//	FUEL_STEP = 2,
	//	ACC_STEP = 10,
	//	BRK_STEP = 10
	//};
	char gamerID[CAR_CONST::ID_LEN]; // 소유자 ID
	int fuelGauge; // 연료량
	int curSpeed; // 현재속도
	void ShowCarState(); // 보통 실무에서는 선언만 해놓고 정의는 밖에서 하는 경우가 많다
	void Accel();        // 어차피 헤더파일과 소스파일로 나눌 것이기 때문이다.
	void Break();        // 메모리가 한개의 파일로 집중돼있는걸 방지하기 위해 헤더,소스를 나눈다.
};

void Car::ShowCarState() // 멤버 함수
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

int main()
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}