//여러개의 헤더와 소스
//하나의 클래스당 하나의 헤더파일과 하나의 cpp파일을 만든다.
#include "main_header.h"
#include "Animal.h"
#include "Person1.h"

int main() {

	Animal* animal = new Animal(2, "닭");
	animal->printInfo();

	Person* person = new Person("1234-5678", "홍길동");
	person->printInfo();

	//exam1();

	return 0;
}

//void exam3() {
//	printf("exam3()\n");
//	count++;
//	exam1();
//}
//
//void exam2() {
//	printf("exam2()\n");
//	count++;
//	exam3();
//}
//
//void exam1() {
//	//if (count > 10) {
//	//	//Do Nothing
//	//}
//	//else {
//	//	printf("exam1()\n");
//	//	count++;
//	//	exam2();
//	//}
//	if (count <= 10) {
//		printf("exam1()\n");
//		count++;
//		exam2();
//	}
//}