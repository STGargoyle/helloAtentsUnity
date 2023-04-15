#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int BoxVolume(int length, int width = 1, int height = 1);
// 함수 선언만 했다.

int main() {
	cout << "3,3,3 : " << BoxVolume(3, 3, 3) << endl;
	cout << "5,5,D : " << BoxVolume(5, 5) << endl;
	cout << "7,D,D : " << BoxVolume(7) << endl;
	// cout << "D,D,D : " << BoxVolume() << endl;
	// length에는 디폴트값이 없기 때문에 주석 처리한 윗 줄 때문에 오류가 날 수밖에 없다
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}