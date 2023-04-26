#pragma once

void ShowMenu(void);       // �޴����
void MakeAccount(void);    // ���°����� ���� �Լ�
void DepositMoney(void);       // ��    ��
void WithdrawMoney(void);      // ��    ��
void ShowAllAccInfo(void);     // �ܾ���ȸ
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

class Account
{
private:
    int accID;      // ���¹�ȣ
    int balance;    // ��    ��
    char* cusName;   // ���̸�
public:
    Account(int ID, int money, const char* name);
    int GetAccID() const;
    void Deposit(int money);
    int Withdraw(int money);
    void ShowAccInfo() const;
    ~Account();    
};
