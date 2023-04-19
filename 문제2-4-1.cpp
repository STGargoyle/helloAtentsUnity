#include "Header2-4-1.h"

int main()
{
	char str1[40] = "Hello everyone!";
	char str2[40] = "My name is Jung.";
	char str3[40];
	
	cout << "str1의 길이는? " << strlen(str1) << endl;
	strcat_s(str1, sizeof(str1), str2);
	cout << "str1의 뒤에 str2 덧붙이기: " << str1 << endl;
	strcpy_s(str3, sizeof(str3), str1);
	cout << "str1을 복사하기: " << str3 << endl;

	int result = strcmp(str1, str3);
	if (result == 0)
		cout << "같은 문장입니다." << endl;
	else
		cout << "다른 문장입니다." << endl;

	return 0;
}