#include <cstdio>
//일반적인 enum
//클래스 내부의 enum
//강화된 enumclass 타입의 enum

//playing, paused, win, lose


enum Month { //->전역 enum
	JAN = 1, FEB = 20, MAR, APR, MAY = 40, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};


int main() {
	Month m = Month::JAN;

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
	case  Month::APR:
		printf("4월 입니다.\n");
		break;
	case  Month::MAY:
		printf("5월 입니다.\n");
		break;
	case  Month::JUN:
		printf("6월 입니다.\n");
		break;
	case  Month::JUL:
		printf("7월 입니다.\n");
		break;
	case  Month::AUG:
		printf("8월 입니다.\n");
		break;
	case  Month::SEP:
		printf("9월 입니다.\n");
		break;
	case  Month::OCT:
		printf("10월 입니다.\n");
		break;
	case  Month::NOV:
		printf("11월 입니다.\n");
		break;
	case  Month::DEC:
		printf("12월 입니다.\n");
		break;
	default:
		break;
	}

	return 0;
}