﻿#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <iostream>

int main() {

	std::string str1 = "apple";
	std::string str2 = "banana";

	//if (str1.compare(str2) == 0) {
	//	printf("두 문자열은 같다.");
	//}
	//else {
	//	printf("두 문자열은 다르다.");
	//}

	if (strcmp(str1.c_str(), str2.c_str()) == 0) {
		printf("두 문자열은 같다.");
	}
	else {
		printf("두 문자열은 다르다.");
	}

	return 0;
}
