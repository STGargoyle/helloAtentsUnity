#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int BoxVolume(int length, int width = 1, int height = 1);
// �Լ� ���� �ߴ�.

int main() {
	cout << "3,3,3 : " << BoxVolume(3, 3, 3) << endl;
	cout << "5,5,D : " << BoxVolume(5, 5) << endl;
	cout << "7,D,D : " << BoxVolume(7) << endl;
	// cout << "D,D,D : " << BoxVolume() << endl;
	// length���� ����Ʈ���� ���� ������ �ּ� ó���� �� �� ������ ������ �� ���ۿ� ����
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}