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
	// 이 부분이 Deepcopy 즉 깊은 복사이다.
	// 따로따로 할당하게 만든다

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
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
	// 얕은 복사 라고 함 디폴트 복사생성자에 맡겼기 때문에 제대로 실행 안됨
	// 깊은 복사 는 디폴트에 맡기지 않고 복사생성자를 따로 생성해서 실행하는 것
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}