#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>

#define MYVALUE 100

class Person {
public:
	const int age;	// 변수형태의 공간을 갖고있는 상수다. -> 강제적으로 바꿀 수 없다.

	Person(int n) : age(n) {

	}
};

int main() {

	const char* str;
	char* myStr = new char[100];
	strcpy(myStr, "Hello World!");
	str = myStr;

	printf("%s", str);
	return 0;

	int input;
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	Person* p = new Person(input);

	printf("%d", p->age);

	return 0;
}