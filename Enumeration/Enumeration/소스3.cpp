#include <cstdio>
//일반적인 enum

enum Month { //->전역 enum
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
	Month m = JAN;

	printf("%d\n", m);

	switch (m)
	{
	case JAN:
		printf("1월 입니다.\n");
		break;
	case FEB:
		printf("2월 입니다.\n");
		break;
	case MAR:
		printf("3월 입니다.\n");
		break;
	case APR:
		printf("4월 입니다.\n");
		break;
	case MAY:
		printf("5월 입니다.\n");
		break;
	case JUN:
		printf("6월 입니다.\n");
		break;
	case JUL:
		printf("7월 입니다.\n");
		break;
	case AUG:
		printf("8월 입니다.\n");
		break;
	case SEP:
		printf("9월 입니다.\n");
		break;
	case OCT:
		printf("10월 입니다.\n");
		break;
	case NOV:
		printf("11월 입니다.\n");
		break;
	case DEC:
		printf("12월 입니다.\n");
		break;
	default:
		break;
	}

	return 0;
}