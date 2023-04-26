#include "Default.h"
#include "Account.h"

Account* accArr[100];   // Account ������ ���� �迭
int accNum = 0;        // ����� Account ��

Account::Account(int ID, int money, const char* name)
    :accID(ID), balance(money)
{
    cusName = new char[strlen(name) + 1];
    strcpy_s(cusName, strlen(name) + 1, name);
}

int Account::GetAccID() const { return accID; }

void Account::Deposit(int money)
{
    if (money <= 0) return;

    balance += money;
}

int Account::Withdraw(int money)
{
    if (balance < money) return -1;
    balance -= money;
    return money;
}

void Account::ShowAccInfo() const
{
    cout << "����ID: " << accID << endl;
    cout << "�̸�: " << cusName << endl;
    cout << "�ܾ�: " << balance << endl;
}

Account::~Account()
{
    delete[]cusName;
}

void ShowMenu(void)
{
    cout << "-----Menu------" << endl;
    cout << "1. ���°���" << endl;
    cout << "2. ��    ��" << endl;
    cout << "3. ��    ��" << endl;
    cout << "4. �������� ��ü ���" << endl;
    cout << "5. ���α׷� ����" << endl;
}

void MakeAccount(void)
{
    int id;
    char name[NAME_LEN];
    int balance;

    cout << "[���°���]" << endl;
    cout << "����ID: ";   cin >> id;
    cout << "��  ��: ";   cin >> name;
    cout << "�Աݾ�: ";   cin >> balance;
    cout << endl;

    accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney(void)
{
    int money;
    int id;
    cout << "[��    ��]" << endl;
    cout << "����ID: ";   cin >> id;
    cout << "�Աݾ�: ";   cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            accArr[i]->Deposit(money);
            cout << "�ԱݿϷ�" << endl << endl;
            return;
        }
    }
    cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void WithdrawMoney(void)
{
    int money;
    int id;
    cout << "[��    ��]" << endl;
    cout << "����ID: ";   cin >> id;
    cout << "��ݾ�: ";   cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            if (accArr[i]->Withdraw(money) < money)
            {
                cout << "�ܾ׺���" << endl << endl;
                return;
            }
            cout << "��ݿϷ�" << endl << endl;
            return;
        }
    }
    cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void ShowAllAccInfo(void)
{
    for (int i = 0; i < accNum; i++)
    {
        accArr[i]->ShowAccInfo();
        cout << endl;
    }
}