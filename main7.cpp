#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

#define SQUARE(x) ((x)*(x))

int main() {
	cout << SQUARE(5.5);
	return 0;
}

template<typename T>

inline T SQUARE(T x)
{
	return x * x;
}

int main() {
	cout << SQUARE(5) << endl;
	cout << SQUARE(12);
	return 0;
}