#include <cstdio>

#define SWAP(X, Y, T) T = X; \
X = Y; Y = T;

int main() {

	int v1 = 100;
	int v2 = 200;
	int temp;

	//T = v1;	//	temp = v1;
	//v1 = v2;
	//v2 = temp;
	printf("VALUE SWAP 전\n");
	printf("v1 : %d\n", v1);   //100
	printf("v2 : %d\n", v2);   //200

	SWAP(v1, v2, temp)

	printf("VALUE SWAP 후\n");
	printf("v1 : %d\n", v1);   //200
	printf("v2 : %d\n", v2);   //100

	return 0;
}