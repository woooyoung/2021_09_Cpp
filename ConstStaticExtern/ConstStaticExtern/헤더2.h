#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

/*static int myValue = 100;*/		// 각각의 cpp파일에 따로따로 저장되는 변수

extern int myValue; // 어떤 cpp 파일에서도 동일한 형태로 접근이 가능하다.

// 해당 변수가 각각의 cpp파일이 컴파일 될 때 종속된다.

void add();


//스태틱 키워드가 붙어있으면 각각의 cpp파일에서 다르게 작용한다.
//->include 한 cpp 파일마다 다른 선언과 다른 몸체를 갖게된다.