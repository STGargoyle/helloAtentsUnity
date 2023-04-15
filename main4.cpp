#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void MyFunc()
{
	cout << "MyFunc()" << endl;
}

void MyFunc(char c)
{
	cout << "MyFunc(char c)" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b)" << endl;
}

int main()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12,13);

	return 0;
}