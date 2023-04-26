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
		int len = strlen(myname) + 1; // 끝에 널값이 있어야 하기 때문에 +1로 추가
		name = new char[len];
		strcpy_s(name, len, myname); // name이 char* 즉 문자열 포인터였기 때문에 길이로
	}
	Person() // void 생성자를 호출해야 해서 만들어짐
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
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person() 
	{ // 소멸자 생성자에서 동적할당 했다면 소멸자에서 메모리 해체하는 것이 원칙이다.
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
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;

		/*len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy_s(strptr, len, namestr);
		parr[i].SetPersonInfo(strptr, age);*/
		parr[i] = new Person(namestr, age);
		// 동적할당
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	for (int i = 0; i < 3; i++)
		delete parr[i];

	return 0;
}