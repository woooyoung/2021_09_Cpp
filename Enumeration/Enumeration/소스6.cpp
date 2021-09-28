#include <cstdio>
//enum class를 안쓰면?

enum Month {
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

enum Math {
	INC, DEC  // DEC가 중복된다.
};

int main() {
	Month m = JAN;
	int value = (int)m;

	printf("%d\n", m);

	switch (m)
	{
	case Month::JAN:
		printf("1월 입니다.\n");
		break;
	case Month::FEB:
		printf("2월 입니다.\n");
		break;
	case Month::MAR:
		printf("3월 입니다.\n");
		break;
	case Month::APR:
		printf("4월 입니다.\n");
		break;
	case Month::MAY:
		printf("5월 입니다.\n");
		break;
	case Month::JUN:
		printf("6월 입니다.\n");
		break;
	case Month::JUL:
		printf("7월 입니다.\n");
		break;
	case Month::AUG:
		printf("8월 입니다.\n");
		break;
	case Month::SEP:
		printf("9월 입니다.\n");
		break;
	case Month::OCT:
		printf("10월 입니다.\n");
		break;
	case Month::NOV:
		printf("11월 입니다.\n");
		break;
	case Month::DEC:
		printf("12월 입니다.\n");
		break;
	default:
		break;
	}

	return 0;
}