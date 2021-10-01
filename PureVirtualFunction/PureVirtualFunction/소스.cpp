//순수 가상함수(Pure Virtual Function) : 몸체가 없는 가상함수 -> 무조건 상속을 받아야 한다.(자식클래스에서 구현을 해줘야 한다.)
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

enum class Time {
	Morning, afternoon, Night
};

class Animal { // 추상 클래스 abstract
public:
	char name[100];
	Animal(const char* name) {
		strcpy(this->name, name);
	}

	virtual int getLegs() = 0;	//순수 가상함수(만들어지게 되면 해당 클래스는 독립적으로 존재 할 수 없다.)

	void printInfo() {
		printf("이름 : %s, 다리 : %d\n", name, getLegs());
	}
};

class Person : public Animal {
private:
	Time time = Time::Morning;
public:
	Person(const char* name) : Animal(name){}

	virtual int getLegs() {
		switch (time) {
		case Time::Morning: return 4;
		case Time::afternoon: return 2;
		case Time::Night: return 3;
		}
		return 2;
	}

	void setTime(Time t) {
		this->time = t;
	}
};
class Dog : public Animal {
public:
	Dog(): Animal("개"){}

	virtual int getLegs() {
		return 4;
	}
};

int main() {

	//Animal* animal = new Animal("abcd");

	Person* p = new Person("홍길동");
	p->setTime(Time::Night);
	p->printInfo();

	Dog* d = new Dog();
	d->printInfo();


	return 0;
}