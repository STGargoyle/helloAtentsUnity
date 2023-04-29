#include"Default.h"
#include"Quest.h"

namespace COM_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	void ShowPosition(int pos)
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
}

class NameCard
{
private:
	char* name;
	char* company;
	char* phoneNum;
	int position;

public:
	NameCard(const char* _name, const char* _company, const char* _phone, int pos)
		:position(pos)
	{
		int len = strlen(_name) + 1;
		name = new char[len];
		strcpy_s(name, len, _name);
		
		company = new char[strlen(_company)+1];
		strcpy_s(company, strlen(_company) + 1, _company);
		phoneNum = new char[strlen(_phone) + 1];
		strcpy_s(phoneNum, strlen(_phone) + 1, _phone);
	}

	void ShowNameCardInfo()
	{
		cout << "����: "; cin >> name;
		cout << "ȸ���̸�: "; cin >> company;
		cout << "��ȣ: "; cin >> phoneNum;
		cout << "����: "; COM_POS::ShowPosition(position);
	}

	~NameCard()
	{
		delete[] name, company, phoneNum;
	}
};

int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COM_POS::CLERK);
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COM_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COM_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	
	return 0;
}