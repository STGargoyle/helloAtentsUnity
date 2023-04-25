#include "Default.h"

class SinivelCap // �๰ óġ��
{
public:
	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }
};

class SneezeCap // ��ä�� óġ��
{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};

class SnuffleCap // �ڸ��� óġ��
{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
};

class CONTAC600 // �๰ ��ä�� �ڸ���, ���հ�������� ������.
{
private: // ĸ��ȭ �� �� ��������, �����ϰ� ����� �ϱ� ����.
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
public:                 // �����ϴ� ���� ����
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