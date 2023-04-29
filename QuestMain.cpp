#include"Default.h"
#include"Quest.h"

int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COM_POS::CLERK);
	NameCard manClerk2 = manClerk;
	manClerk.ShowNameCardInfo();

	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COM_POS::SENIOR);
	manSenior.ShowNameCardInfo();

	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COM_POS::ASSIST);
	manAssist.ShowNameCardInfo();

	return 0;
}