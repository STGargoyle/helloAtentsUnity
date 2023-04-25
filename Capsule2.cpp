#include "Default.h"

class SinivelCap // 콧물 처치용
{
public:
	void Take() const { cout << "콧물이 싹~ 납니다." << endl; }
};

class SneezeCap // 재채기 처치용
{
public:
	void Take() const { cout << "재채기가 멎습니다." << endl; }
};

class SnuffleCap // 코막힘 처치용
{
public:
	void Take() const { cout << "코가 뻥 뚫립니다." << endl; }
};

class CONTAC600 // 콧물 재채기 코막힘, 종합감기약으로 묶었다.
{
private: // 캡슐화 할 때 정보은닉, 안전하게 묶어야 하기 때문.
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:                 // 변경하는 것을 막음
	void TakeCONTAC600(const CONTAC600& cap) const { cap.Take(); }
	/*void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }*/
};

int main()
{
	CONTAC600 cap;
	/*SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;*/

	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);
	/*sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);*/

	return 0;
}