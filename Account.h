#pragma once

#define NAME_LEN = 30;

void ShowMenu(); //메뉴출력
void MakeAccount(); // 계좌개설을 위한 함수
void DepositMoney(); // 입금
void WithdrawMoney(); // 출금
void ShowAllAccInfo(); // 잔액조회
// 열거형 상수
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
//계좌개설, 입금,  출금,      잔액,    나가기

typedef struct { // 클래스로 바꿔야 함
	int accID; // 계좌번호
	int balance; // 잔액
	char cusName[NAME_LEN]; // 고객 이름
} Account;