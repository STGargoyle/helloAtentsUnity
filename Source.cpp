#include "Header.h"

void Car::InitMembers(const char* ID, int fuel)
{
    strcpy_s(gamerID, sizeof(gamerID), ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState()  //��� �Լ� 
{
    cout << "������ID: " << gamerID << endl;
    cout << "���ᷮ: " << fuelGauge << "%" << endl;
    cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
}