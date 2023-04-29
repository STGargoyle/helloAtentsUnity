#pragma once

namespace COM_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	void ShowPosition(int pos);
}

class NameCard
{
private:
	char* name;
	char* company;
	char* phoneNum;
	int position;

public:
	NameCard(const char* _name, const char* _company, const char* _phone, int pos);
	NameCard(const NameCard& copy, int pos);
	void ShowNameCardInfo();
	~NameCard();
};