// 정수 다섯개의 평균을 구하는 매크로 함수를 만들어주세요.
#include <cstdio>

//구현시작
#define AVERAGE(A,B,C,D,E) (A+B+C+D+E) / 5
//구현끝

int main() {
	int result = 0;

	//구현시작
	result = AVERAGE(10, 22, 34, 42, 56);
	//구현끝

	printf("%d\n", result);

	return 0;
}