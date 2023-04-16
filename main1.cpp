#include<cstdlib>
#include<iostream>
#include<cstring>

using namespace std;

namespace BestComImpl // ������ ������ ���� �ϰ�
{
	void SimpleFunc();
}

namespace ProgComImpl
{
	void SimpleFunc();
}

int main() {   // ���� ���� ������ �� ����ص� ��.
	BestComImpl::SimpleFunc(); // �Լ����� ���Ƶ� namespace�� �ٸ��� ������
	ProgComImpl::SimpleFunc(); // �˾Ƽ� ���� ���� ó���� �ȴ�.
	                           // �ǹ������� ���� ���� �� ���̴� �� ���ܳ��°� ����.
	return 0;
}

void BestComImpl::SimpleFunc() // �Ʒ����� ���Ǹ� �Ѵ�.
{
	cout << "BestCom�� ������ �Լ�" << endl;
}

void ProgComImpl::SimpleFunc()
{
	cout << "ProgCom�� ������ �Լ�" << endl;
}