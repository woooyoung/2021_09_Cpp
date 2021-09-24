#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <cstdlib>
//소멸자 가상함수
class Animal {
public:
	int legs;
	char* name;  //이름 -> 동적할당
	Animal(int legs, const char* name) {
		this->name = new char[strlen(name) + 1];
		this->legs = legs;
		strcpy(this->name, name);
	}

	virtual ~Animal() {
		printf("애니멀 소멸자 호출\n");
		delete[] name;
	}

	virtual void printInfo() {
		printf("다리의 갯수 : %d\n", legs);
		printf("이름 : %s\n", name);
	}
};
class Person : public Animal {
public:
	char* regist_no;
	Person(const char* regist_no) : Animal(2, "사람") {
		this->regist_no = new char[strlen(regist_no) + 1];
		strcpy(this->regist_no, regist_no);
	}

	virtual ~Person() {
		printf("사람 소멸자 호출\n");
		delete[] regist_no;
	}

	virtual void printInfo() {
		printf("이름 : %s\n", name);
		printf("주민번호 : %s\n", regist_no);
	}
};
int main() {
		
	Animal* animal = new Person("1234-5678");

	delete animal;

	Person* person = new Person("7894-1234");

	delete person;

	return 0;
}