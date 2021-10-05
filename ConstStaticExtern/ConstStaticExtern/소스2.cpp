#include "헤더.h"

int main() {

	MyClass* c = new MyClass();
	c->exam1();

	//c->exam2();		//이렇게 보다는
	MyClass::exam2();	//해당 줄이 더 맞는 방법

	return 0;
}