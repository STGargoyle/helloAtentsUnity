#include"Default.h"

//int simObjCnt = 0;
//int cmxObjCnt = 0;
//원래 c++에는 전역변수 쓰면 안되지만 예제로 나온것 오해 없도록
class SoSimple
{
private: // 객체 생성전 미리 할당됨
	static int simObjCnt; // static 클래스 변수
	// 객체가 생성되기 전에 할당되어있다. (전역변수의 성격을 가지고 있기 때문)
	// 그렇기 때문에 static이 선언되어있다면 이 클래스의 멤버변수 자리에 있지만
	// 실제로는 이 클래스의 멤버변수가 아니다.
	int num; // 멤버변수
public:
	SoSimple(int n) : num(n)
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};
int SoSimple::simObjCnt = 0;

class SoComplex
{
private:
	static int cmxObjCnt;
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;

int main()
{
	SoSimple sim1(3);
	SoSimple sim2(4);

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();

	return 0;
}