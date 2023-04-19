#include "Header.h"

void Car::InitMembers(const char* ID, int fuel)
{
    strcpy_s(gamerID, sizeof(gamerID), ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState()  //멤버 함수 
{
    cout << "소유자ID: " << gamerID << endl;
    cout << "연료량: " << fuelGauge << "%" << endl;
    cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}