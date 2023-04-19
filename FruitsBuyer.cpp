#include "FruitsBuyer.h"
#include "FruitsSeller.h"

void FruitBuyer::InitMembers(int money)
{
	myMoney = money;
	numOfApples = 0;
}
void FruitBuyer::BuyApples(FruitSeller& seller, int money)
{
	numOfApples += seller.SaleApples(money);
	myMoney -= money;
}
void FruitBuyer::ShowBuyResult()
{
	cout << "���� �ܾ�: " << myMoney << endl;
	cout << "��� ����: " << numOfApples << endl << endl;
};