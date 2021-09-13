// 상속(inheritance)

struct Animal {
	int age = 1;
	int legs = 0;
	int arms = 0;
};

struct Person : public Animal {
	Person() {
		int legs = 2;
		int arms = 2;
	}
};

struct Tiger : public Animal {
	Tiger() {
		int age = 11;
		int legs = 4;
	}
};


#include <cstdio>

int main() {

	Person p1;
	p1.age = 0;
	p1.arms = 0;
	p1.legs = 0;

	Person* person;

	Animal* animal;

	//animal = person;

	person = (Person*)animal;  // casting -> 형변환

	return 0;
}