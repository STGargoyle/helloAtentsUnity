#include"Default.h"
// c++ 에는 readonly가 없다.
// explicit ==> 복사가 안되게 막는 키워드
// const   mutable

class CountryArea
{
public: // 멤벼변수에서 초기화 불가능, 하지만 const static을 붙이면 가능
	const static int RUSSIA         = 1707540;
	const static int CANADA         = 998467;
	const static int CHINA          = 957290;
	const static int SOUTH_KOREA    = 9922;
	// 멤버변수가 초기화 되려면 원칙은 생성자의 멤버 이니셜라이즈 나 생성자
	// 중괄호 안에서 초기화 가능
};

int main()
{
	cout << "러시아 면적: " << CountryArea::RUSSIA << "㎢" << endl;
	cout << "캐나다 면적: " << CountryArea::CANADA << "㎢" << endl;
	cout << "중국 면적: " << CountryArea::CHINA << "㎢" << endl;
	cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "㎢" << endl;
	return 0;
}