#include "Header2-4-1.h"

int main()
{
	char str1[40] = "Hello everyone!";
	char str2[40] = "My name is Jung.";
	char str3[40];
	
	cout << "str1�� ���̴�? " << strlen(str1) << endl;
	strcat_s(str1, sizeof(str1), str2);
	cout << "str1�� �ڿ� str2 �����̱�: " << str1 << endl;
	strcpy_s(str3, sizeof(str3), str1);
	cout << "str1�� �����ϱ�: " << str3 << endl;

	int result = strcmp(str1, str3);
	if (result == 0)
		cout << "���� �����Դϴ�." << endl;
	else
		cout << "�ٸ� �����Դϴ�." << endl;

	return 0;
}