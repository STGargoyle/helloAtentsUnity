#include<iostream>
#include<cstdlib>
using namespace std;

namespace CAR_CONST
{
	enum
	{ // �Ʒ��� ���� �ۼ��� ���� ������ ���� �ڸ��� �ʹ� ���� �����Ѵٸ� 
	  // �̿� ���� ���� �ۼ��ص� �ȴ�.
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{   // ��� ����
	//enum
	//{ // #define�� c���� ���� ��ũ�� �����Լ��� ��� �̱� ������ 
	//  // c++,c#������ �̿� ���� enum�� Ȱ���Ѵ�.
	//	ID_LEN = 20,
	//	MAX_SPD = 200,
	//	FUEL_STEP = 2,
	//	ACC_STEP = 10,
	//	BRK_STEP = 10
	//};
	char gamerID[CAR_CONST::ID_LEN]; // ������ ID
	int fuelGauge; // ���ᷮ
	int curSpeed; // ����ӵ�
	void ShowCarState(); // ���� �ǹ������� ���� �س��� ���Ǵ� �ۿ��� �ϴ� ��찡 ����
	void Accel();        // ������ ������ϰ� �ҽ����Ϸ� ���� ���̱� �����̴�.
	void Break();        // �޸𸮰� �Ѱ��� ���Ϸ� ���ߵ��ִ°� �����ϱ� ���� ���,�ҽ��� ������.
};

void Car::ShowCarState() // ��� �Լ�
{
	cout << "������ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
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