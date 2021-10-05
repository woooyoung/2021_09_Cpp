#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>

#define MYVALUE 100
#define GRID_HEIGHT 2
#define GRID_WIDTH 2
class MyClass {
public:
	int a;
	static int static_member_int;   //소스파일에 따로 몸체를 만들어줘야 한다.
	void exam1();
	static void exam2();
};

extern int displayData[GRID_HEIGHT][GRID_WIDTH];  //extern : 외부에 존재한다
// 프로그램 전체에서 쓰는 전역변수
//소스파일이던 헤더파일이던 다 쓸 수 있다.
//extern 으로 선언 된 변수는 링킹을 한다.