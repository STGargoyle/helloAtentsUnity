#include "FruitsSeller.h"
#include "FruitsBuyer.h"

void FruitSeller::InitMembers(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}
int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}
void FruitSeller::ShowSalesResult()
{
	cout << "���� ���: " << numOfApples << endl;
	cout << "�Ǹ� ����: " << myMoney << endl << endl;
}