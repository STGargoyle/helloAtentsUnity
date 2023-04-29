#include"Default.h"

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage)
		:age(myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
	}

	Person(const Person& copy)
		:age(copy.age)
	{
		int len = strlen(copy.name) + 1;
		name = new char[len];
		strcpy_s(name, len, copy.name);
	}
	// �� �κ��� Deepcopy �� ���� �����̴�.
	// ���ε��� �Ҵ��ϰ� �����

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "Called destructor!" << endl;
	}
};

int main()
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1; 
	// ���� ���� ��� �� ����Ʈ ��������ڿ� �ð�� ������ ����� ���� �ȵ�
	// ���� ���� �� ����Ʈ�� �ñ��� �ʰ� ��������ڸ� ���� �����ؼ� �����ϴ� ��
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}