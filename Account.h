#pragma once

#define NAME_LEN = 30;

void ShowMenu(); //�޴����
void MakeAccount(); // ���°����� ���� �Լ�
void DepositMoney(); // �Ա�
void WithdrawMoney(); // ���
void ShowAllAccInfo(); // �ܾ���ȸ
// ������ ���
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
//���°���, �Ա�,  ���,      �ܾ�,    ������

typedef struct { // Ŭ������ �ٲ�� ��
	int accID; // ���¹�ȣ
	int balance; // �ܾ�
	char cusName[NAME_LEN]; // �� �̸�
} Account;