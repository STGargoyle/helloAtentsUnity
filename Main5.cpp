#include"Default.h"
// c++ ���� readonly�� ����.
// explicit ==> ���簡 �ȵǰ� ���� Ű����
// const   mutable

class CountryArea
{
public: // �⺭�������� �ʱ�ȭ �Ұ���, ������ const static�� ���̸� ����
	const static int RUSSIA         = 1707540;
	const static int CANADA         = 998467;
	const static int CHINA          = 957290;
	const static int SOUTH_KOREA    = 9922;
	// ��������� �ʱ�ȭ �Ƿ��� ��Ģ�� �������� ��� �̴ϼȶ����� �� ������
	// �߰�ȣ �ȿ��� �ʱ�ȭ ����
};

int main()
{
	cout << "���þ� ����: " << CountryArea::RUSSIA << "��" << endl;
	cout << "ĳ���� ����: " << CountryArea::CANADA << "��" << endl;
	cout << "�߱� ����: " << CountryArea::CHINA << "��" << endl;
	cout << "�ѱ� ����: " << CountryArea::SOUTH_KOREA << "��" << endl;
	return 0;
}