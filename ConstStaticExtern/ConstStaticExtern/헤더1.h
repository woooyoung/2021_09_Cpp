#pragma once
//static -> 정적 (클래스 내부/외부 로 의미가 달라진다.)
//다이나믹 함수와 스태틱 함수의 가장 큰 차이점은 this 의 유무이다.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>

#define MYVALUE 100
class MyClass {
public:
	int a;
	static int b;  //스태틱 변수 타입을 전역변수 처럼 생각
	void exam1() {	//다이나믹(동적) 함수 -> 자기자신의 인스턴스가 있다(주체가 있다.)
		a = 100;
		b = 200;
		this->a = 200;
		printf("exam1\n");
	}

	static void exam2() {	//스태틱(정적) 함수 -> 자기자신의 인스턴스가 없다(주체가 필요없다)
		//a = 100;	//스태틱 함수는 클래스의 변수에 접근할 수 없다.
		b = 200;
		printf("exam2\n");
	}
};