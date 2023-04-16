#include<iostream>
#include<cstdlib>
#include<cstring>

// using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A'; // endl을 작성해야 줄을 바꾸기 때문에 
	cout << ' ' << 3.14 << endl; // 아랫줄도 그대로 이어져서 작성된다.
	return 0;
}