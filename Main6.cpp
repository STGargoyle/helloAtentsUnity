#include"Default.h"

class Temporary
{
private:
	int num;

public:
	Temporary(int n) :num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main()
{
	Temporary(100);
	cout << "********** after make!" << endl << endl;

	          // 임시 객체, 그때 쓰고 바로 버린다.
	Temporary(200).ShowTempInfo();
	cout << "********** after make!" << endl << endl;

	                // 참조자로 받았기 때문에 바로 사라지지 않는다.
	const Temporary& ref = Temporary(300);
	cout << "********** end of main!" << endl << endl;
	return 0;
}