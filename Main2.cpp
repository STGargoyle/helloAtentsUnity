#include"Default.h"

class Girl; //코드는 위에서 아래로 읽어들이기 때문에 이렇게 먼저 작성해야함
class Boy
{
private:
	int height;
	friend class Girl;
public:
	Boy(int len) : height(len)
	{	}
	void ShowYourFriendInfo(Girl& frn);
};

class Girl
{
private:
	char phNum[20];
public:
	Girl(const char* num)
	{
		strcpy_s(phNum, sizeof(phNum), num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His height: " << frn.height << endl;
}

int main()
{
	Boy boy(170);
	Girl girl("010-1234-5678");

	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}