#include<iostream>
#include<cstdlib>
#include<cstring>
const int NAME_LEN = 30;
using namespace std;

// 전역함수 C++에서는 허용되지 않는다
void ShowMenu(); //메뉴출력
void MakeAccount(); // 계좌개설을 위한 함수
void DepositMoney(); // 입금
void WithdrawMoney(); // 출금
void ShowAllAccInfo(); // 잔액조회
// 열거형 상수
enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};
     //계좌개설, 입금,  출금,      잔액,    나가기

typedef struct { // 클래스로 바꿔야 함
	int accID; // 계좌번호
	int balance; // 잔액
	char cusName[NAME_LEN]; // 고객 이름
} Account;

// 계좌 개설하고 나서 입금할 때 이자가 붙도록 작성할 예정.

Account accArr[100];
int accNum = 0;

int main() 
{
	int choice;
	while (1)
	{
		ShowMenu();
		cout << "선택: ";
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

void ShowMenu() {
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입    금" << endl;
	cout << "3. 출    금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount() {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이름: "; fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = NULL;
	cout << "입금액: "; cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy_s(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney() {
	int money;
	int id;
	cout << "[입    금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void WithdrawMoney() {
	int money;
	int id;
	cout << "[출    금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].balance < money)
		{
			cout << "잔액부족" << endl << endl;
			return;
		}
		accArr[i].balance -= money;
		cout << "출금완료" << endl << endl;
		return;
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++)
	{
		cout << "계좌ID: " << accArr[i].accID << endl;
		cout << "이  름: " << accArr[i].cusName << endl;
		cout << "잔  액: " << accArr[i].balance << endl << endl;
	}
}