#include <cstdio>

#define MYVALUE 100

class Person {
public:
	const int age;

	Person() : age(10) {

	}
};

int main() {

	//const int value = MYVALUE;
	//printf("%d", value);

	Person* p = new Person();

	printf("%d", p->age);

	return 0;
}