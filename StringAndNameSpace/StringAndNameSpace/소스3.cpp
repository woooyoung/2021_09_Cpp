//namespace
#include <iostream>

namespace dong {
	void exam1();

	class Person {
	public:
		Person();

		void printInfo(int i, const char* str);
	};
}

namespace sun {
	void exam1();

	class Person {
	public:
		Person();
	};
}

int main() {

	dong::exam1();
	sun::exam1();

	return 0;
}

void dong::exam1() {
	printf("홍길동이 만든 함수 exam1이다.\n");
}

void sun::exam1() {
	printf("홍길순이 만든 함수 exam1이다.\n");
}

dong::Person::Person() {

}

sun::Person::Person() {

}

void dong::Person::printInfo(int i, const char* str) {

}