#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdlib>

int count = 0;

void exam3() {
	printf("exam3()\n");
	count++;
	exam1();
}

void exam2() {
	printf("exam2()\n");
	count++;
	exam3();
}

void exam1() {
	//if (count > 10) {
	//	//Do Nothing
	//}
	//else {
	//	printf("exam1()\n");
	//	count++;
	//	exam2();
	//}
	if (count <= 10) {
		printf("exam1()\n");
		count++;
		exam2();
	}
}




