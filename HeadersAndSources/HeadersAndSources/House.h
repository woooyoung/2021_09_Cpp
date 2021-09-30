#ifndef __HOUSE_H__
#define __HOUSE_H__

//#include "Animal.h"
class Animal; //클래스도 함수와 마찬가지로 전방선언을 할 수 있다.

class House {
public:
	Animal* animal;

	void setAnimal(Animal* a);

	class goo;

	class foo {
	public:
		goo* g;
	};
	class goo {
		foo f;
	};
};

#endif 

