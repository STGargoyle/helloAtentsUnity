#include"Default.h"
#include"Quest.h"

void COM_POS::ShowPosition(int pos)
{
	switch (pos)
	{
	case CLERK:
		cout << "사원 " << endl;
		break;
	case SENIOR:
		cout << "주임 " << endl;
		break;
	case ASSIST:
		cout << "대리 " << endl;
		break;
	case MANAGER:
		cout << "과장 " << endl;
		break;
	}
}
NameCard::NameCard(const char* _name, const char* _company, const char* _phone, int pos)
	:position(pos)
{
	int len = strlen(_name) + 1;
	name = new char[len];
	strcpy_s(name, len, _name);

	company = new char[strlen(_company) + 1];
	strcpy_s(company, strlen(_company) + 1, _company);
	phoneNum = new char[strlen(_phone) + 1];
	strcpy_s(phoneNum, strlen(_phone) + 1, _phone);
}

NameCard::NameCard(const NameCard&copy, int pos)
	: name(copy.name), company(copy.company), phoneNum(copy.phoneNum), position(pos)
{
	int len = strlen(copy.name) + 1;
	name = new char[len];
	strcpy_s(name, len, copy.name);

	company = new char[strlen(copy.company) + 1];
	strcpy_s(company, strlen(copy.company) + 1, copy.company);
	phoneNum = new char[strlen(copy.phoneNum) + 1];
	strcpy_s(phoneNum, strlen(copy.phoneNum) + 1, copy.phoneNum);
} // 복사생성자를 위한 깊은복사(Deep copy)는 이렇게 작성하면 된다.

void NameCard::ShowNameCardInfo()
{
	cout << "성명: "; cin >> name;
	cout << "회사이름: "; cin >> company;
	cout << "번호: "; cin >> phoneNum;
	cout << "직급: "; COM_POS::ShowPosition(position);
}

NameCard::~NameCard()
{
	delete[] name, company, phoneNum;
}