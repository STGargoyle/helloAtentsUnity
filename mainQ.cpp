#include<iostream>
#include<cstdlib>
#include<cstring>
const int NAME_LEN = 30;
using namespace std;

// �����Լ� C++������ ������ �ʴ´�
void ShowMenu(); //�޴����
void MakeAccount(); // ���°����� ���� �Լ�
void DepositMoney(); // �Ա�
void WithdrawMoney(); // ���
void ShowAllAccInfo(); // �ܾ���ȸ
// ������ ���
enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};
     //���°���, �Ա�,  ���,      �ܾ�,    ������

typedef struct { // Ŭ������ �ٲ�� ��
	int accID; // ���¹�ȣ
	int balance; // �ܾ�
	char cusName[NAME_LEN]; // ���� �̸�
} Account;

// ���� �����ϰ� ���� �Ա��� �� ���ڰ� �ٵ��� �ۼ��� ����.

Account accArr[100];
int accNum = 0;

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

void ShowMenu() {
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. ��    ��" << endl;
	cout << "3. ��    ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void MakeAccount() {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�̸�: "; fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = NULL;
	cout << "�Աݾ�: "; cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy_s(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney() {
	int money;
	int id;
	cout << "[��    ��]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�Աݾ�: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void WithdrawMoney() {
	int money;
	int id;
	cout << "[��    ��]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "��ݾ�: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].balance < money)
		{
			cout << "�ܾ׺���" << endl << endl;
			return;
		}
		accArr[i].balance -= money;
		cout << "��ݿϷ�" << endl << endl;
		return;
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++)
	{
		cout << "����ID: " << accArr[i].accID << endl;
		cout << "��  ��: " << accArr[i].cusName << endl;
		cout << "��  ��: " << accArr[i].balance << endl << endl;
	}
}