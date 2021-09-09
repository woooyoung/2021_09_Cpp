#include "헤더.h"

int main() {

	int v1 = 100;
	int v2 = 200;

	int rs = add(v1, v2);

	printf("%d\n", rs);

	Person p1;
	p1.age = 22;

	printf("p1.age : %d\n", p1.age);

	//printf("%f\n",pow(2.0,10));

	//printf("%f\n", sin(1));

	//srand(time(0));
	//printf("%d\n", rand() % 10);

	return 0;
}

int add(int a, int b) {
	return a + b;
}