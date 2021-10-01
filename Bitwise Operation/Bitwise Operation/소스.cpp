//비트와이즈 연산 -> 비트를 기준으로 연산 -> 기계의 근본에 해당하는 연산(가장 빠르다)
// Bitwise or  -> |
// Bitwise and -> &
// Shift ->    <<, >>

//연산 속도 (빠른순으로) : 더하기 + 빼기 -  곱하기 * 나누기 / 
//					   : 정수연산 실수연산


#include <cstdio>

void exam1(int params) {
	int category1 = 1;   // 1
	int category2 = 1 << 1; // 2
	int category3 = 1 << 2;  // 4

	if ((category1 & params) != 0) {
		printf("카테고리 1에 포함\n");
	}
	if ((category2 & params) != 0) {
		printf("카테고리 2에 포함\n");
	}
	if ((category3 & params) != 0) {
		printf("카테고리 3에 포함\n");
	}
}

int main() {

	int v1 = 1;  // 0001
	int v2 = 3;  // 0011

	int bitwise_or = v1 | v2;
	printf("bitwise_or : %d\n", bitwise_or);

	int bitwise_and = v1 & v2;
	printf("bitwise_and : %d\n", bitwise_and);

	int shift_left = v2 << 1; // 0110
	printf("shift_left : %d\n", shift_left);

	int shift_right = v2 >> 1; // 0001
	printf("shift_right : %d\n", shift_right);

	int mario_category = 8 + 4 + 2 + 1;

	int enemy_category = 0 + 4 + 2 + 1;

	int turtle_category = 0 + 0 + 2 + 1;

	int feature_category = 0 + 4 + 0 + 0;

	exam1(1 | 2 | 4);

	exam1(1 | 4);

	return 0;
}