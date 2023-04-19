#include "Account.h"
#include "Default.h"
#include <iostream>
#include <cstring>

int main()
{
	int choice;
	while (1)
	{
		ShowMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}