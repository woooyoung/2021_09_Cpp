/*#pragma once*/ // 중복정의 막는 매크로  -> 표준이 아님
#ifndef __PERSON_H__   //중복정의 막는다. -> 표준
#define __PERSON_H__

//클래스의 선언과 파일은 이름이 같지 않아도 된다.
//여러개의 헤더파일에 중복적용이 되어있어도 상관없다.

#include "Animal.h"

class Person : Animal {
public:
	char regist_no[50];

	Person(const char* regist_no, const char* person_name);

	void printInfo();
};

#endif