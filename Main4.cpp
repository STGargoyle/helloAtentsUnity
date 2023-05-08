#include"Default.h"

//int simObjCnt = 0;
//int cmxObjCnt = 0;
//���� c++���� �������� ���� �ȵ����� ������ ���°� ���� ������
class SoSimple
{
private: // ��ü ������ �̸� �Ҵ��
	static int simObjCnt; // static Ŭ���� ����
	// ��ü�� �����Ǳ� ���� �Ҵ�Ǿ��ִ�. (���������� ������ ������ �ֱ� ����)
	// �׷��� ������ static�� ����Ǿ��ִٸ� �� Ŭ������ ������� �ڸ��� ������
	// �����δ� �� Ŭ������ ��������� �ƴϴ�.
	int num; // �������
public:
	SoSimple(int n) : num(n)
	{
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
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
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
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