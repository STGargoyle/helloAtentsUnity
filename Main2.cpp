#include "Default.h"

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
		:age(myage)
	{
		int len = strlen(myname) + 1; // ���� �ΰ��� �־�� �ϱ� ������ +1�� �߰�
		name = new char[len];
		strcpy_s(name, len, myname); // name�� char* �� ���ڿ� �����Ϳ��� ������ ���̷�
	}
	Person() // void �����ڸ� ȣ���ؾ� �ؼ� �������
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char*myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person() 
	{ // �Ҹ��� �����ڿ��� �����Ҵ� �ߴٸ� �Ҹ��ڿ��� �޸� ��ü�ϴ� ���� ��Ģ�̴�.
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	/*Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();*/	
	
	Person* parr[3];

	char namestr[100];
	char* strptr;
	int age, len;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸�: ";
		cin >> namestr;
		cout << "����: ";
		cin >> age;

		/*len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy_s(strptr, len, namestr);
		parr[i].SetPersonInfo(strptr, age);*/
		parr[i] = new Person(namestr, age);
		// �����Ҵ�
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	for (int i = 0; i < 3; i++)
		delete parr[i];

	return 0;
}