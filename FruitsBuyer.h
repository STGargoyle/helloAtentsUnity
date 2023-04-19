#pragma once
#include "FruitsSeller.h"
#include "Default.h"

class FruitBuyer
{
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money);
	void BuyApples(FruitSeller& seller, int money);
	void ShowBuyResult();
};