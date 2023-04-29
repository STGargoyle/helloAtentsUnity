#include"Default.h"
#include"Quest.h"

void COM_POS::ShowPosition(int pos)
{
	switch (pos)
	{
	case CLERK:
		cout << "��� " << endl;
		break;
	case SENIOR:
		cout << "���� " << endl;
		break;
	case ASSIST:
		cout << "�븮 " << endl;
		break;
	case MANAGER:
		cout << "���� " << endl;
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
} // ��������ڸ� ���� ��������(Deep copy)�� �̷��� �ۼ��ϸ� �ȴ�.

void NameCard::ShowNameCardInfo()
{
	cout << "����: "; cin >> name;
	cout << "ȸ���̸�: "; cin >> company;
	cout << "��ȣ: "; cin >> phoneNum;
	cout << "����: "; COM_POS::ShowPosition(position);
}

NameCard::~NameCard()
{
	delete[] name, company, phoneNum;
}