#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	char name[100];
	char lang[200];
	cout << "�̸��� �����Դϱ�? ";
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = NULL;
	cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	//cin >> lang;
	fgets(lang, sizeof(lang), stdin);
	lang[strlen(lang) - 1] = NULL;
	cout << "�� �̸��� " << name << "�Դϴ�. \n";
	cout << "���� �����ϴ� ���� " << lang << "�Դϴ�. " << endl;
	return 0;
}