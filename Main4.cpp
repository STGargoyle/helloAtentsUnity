#include "Default.h"

class SoSimple
{
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "num=" << num << ", ";
		cout << "address+" << this << endl;
	}

	void ShowSimpleData()
	{
		cout << num << endl;
	}
	
	SoSimple*GetThisPointer() // 포인터를 찍었기 때문에
	{
		return this; // 주소값 반환
	}
};

int main()
{
	SoSimple sim1(100); // 100을 넣고 주소값을 받은 뒤,
	SoSimple* ptr1 = sim1.GetThisPointer(); // 주소값을 넣고 주소값을 받는다.
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData(); // 그리하여 주소가 나온다.

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}