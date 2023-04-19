#pragma once
#include<iostream>
#include<cstring>
using namespace std;

namespace CONST_CAR
{
    enum
    {
        ID_LEN = 20,   //��ũ�� ��� ,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class Car
{
private: // ���� ���� ������
    char gamerID[CONST_CAR::ID_LEN];   // ������ID
    int fuelGauge;      // ���ᷮ
    int curSpeed;      // ����ӵ�  
public:
    void InitMembers(const char* ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};

inline void Car::Break() // ���� ����ϰ� ȣ��Ǵ� �Լ��� ������Ͽ� �ִ°� ����.
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