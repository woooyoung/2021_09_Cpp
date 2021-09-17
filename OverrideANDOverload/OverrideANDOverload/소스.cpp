#include <cstdio>
// 오버로딩 : 파라미터 갯수나 타입에 따라서 함수를 구분할 수 있다.
//->클래스 내부에서도 동일하게 적용, 클래스 내부의 함수도 동일
//생성자(함수취급) 동일 -> 클래스가 여러개의 생성자를 가질 수 있다.
int sum(int a, int b) {
	printf("sum(int,int)\n");
	return a + b;
}

float sum(int a, float b) {
	printf("sum(int,float)\n");
	return a + b;
}

int sum(int a, int b, int c) {
	printf("sum(int,int,int)\n");
	return a + b + c;
}

int main() {
	
	int rs = sum(100, 200);
	printf("rs : %d\n", rs);

	rs = sum(100, 200, 300);
	printf("rs : %d\n", rs);

	rs = sum(100, 200.0f);
	printf("rs : %d\n", rs);

	return 0;
}