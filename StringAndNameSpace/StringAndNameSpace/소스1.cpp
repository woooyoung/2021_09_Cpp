﻿//std string -> const char*, char*, 배열 형태의 문자열을 할당 받을 수 있다.
//덧셈 기호를 이용해서 문자열 이어붙이기가 가능하다.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <iostream>

//std::string은 사용자가 메모리 관리, 배열 관리를 하지않고 편안하게 쓰려고 만들었다.

int main() {

	std::string myStr = "Hello World!"; // 연산자 오버로딩
	myStr = myStr + "Hello C++!";

	//std::string* myStrPointer;// 위의 이유로 만들었는데 동적할당???

	printf("%s\n", myStr.c_str());

	//std::cout << myStr;

	return 0;
}
