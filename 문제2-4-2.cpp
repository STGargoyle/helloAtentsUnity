#include "Header2-4-2.h"

int main()
{
	srand(time(NULL));
	cout << "난수 5개 생성" << endl << endl;

	for (int i = 0; i < 5; i++)
	{
		int randNum = rand() % 100;
		cout << randNum << " ";
	}
	cout << endl;

	return 0;
}
