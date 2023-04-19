#include "Account.h"
#include "Default.h"
#include <iostream>
#include <cstring>

Account accArr[100];
int accNum = 0;

void ShowMenu();
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. ��    ��" << endl;
	cout << "3. ��    ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void MakeAccount(); // ���°����� ���� �Լ�
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID: "; cin >> id;
	cin.ignore(); // �Է� ���� ����

	cout << "�̸�: "; fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = NULL;
	cout << "�Աݾ�: "; cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy_s(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney(); // �Ա�
{
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

void WithdrawMoney(); // ���
{
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

void ShowAllAccInfo(); // �ܾ���ȸ
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "����ID: " << accArr[i].accID << endl;
		cout << "��  ��: " << accArr[i].cusName << endl;
		cout << "��  ��: " << accArr[i].balance << endl << endl;
	}
}