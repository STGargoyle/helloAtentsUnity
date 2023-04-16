#include<cstdlib>
#include<iostream>
#include<cstring>

using namespace std;

namespace BestComImpl // 위에서 선언을 먼저 하고
{
	void SimpleFunc();
}

namespace ProgComImpl
{
	void SimpleFunc();
}

int main() {   // 범위 지정 연산자 잘 기억해둘 것.
	BestComImpl::SimpleFunc(); // 함수명이 같아도 namespace가 다르기 때문에
	ProgComImpl::SimpleFunc(); // 알아서 따로 따로 처리가 된다.
	                           // 실무에서도 많이 쓰게 될 것이니 잘 새겨놓는게 좋다.
	return 0;
}

void BestComImpl::SimpleFunc() // 아래에서 정의를 한다.
{
	cout << "BestCom이 정의한 함수" << endl;
}

void ProgComImpl::SimpleFunc()
{
	cout << "ProgCom이 정의한 함수" << endl;
}