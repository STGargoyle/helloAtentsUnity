#pragma once
#include<iostream>
#include<cstring>
using namespace std;

namespace CONST_CAR
{
    enum
    {
        ID_LEN = 20,   //매크로 상수 ,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class Car
{
private: // 접근 제어 지시자
    char gamerID[CONST_CAR::ID_LEN];   // 소유자ID
    int fuelGauge;      // 연료량
    int curSpeed;      // 현재속도  
public:
    void InitMembers(const char* ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};

inline void Car::Break() // 자주 빈번하게 호출되는 함수는 헤더파일에 넣는게 좋다.
{
    if (curSpeed < CONST_CAR::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }

    curSpeed -= CONST_CAR::BRK_STEP;
}

inline void Car::Accel()
{
    if (fuelGauge <= 0)
        return;
    else
        fuelGauge -= CONST_CAR::FUEL_STEP;

    if (curSpeed + CONST_CAR::ACC_STEP >= CONST_CAR::MAX_SPD)
    {
        curSpeed = CONST_CAR::MAX_SPD;
        return;
    }

    curSpeed += CONST_CAR::ACC_STEP;
}