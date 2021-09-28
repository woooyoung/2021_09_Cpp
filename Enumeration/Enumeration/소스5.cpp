#include <cstdio>
//강화된 enumclass 타입의 enum

enum class Month { 
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

enum class Math {
	INC, DEC
};

int main() {
	Month m = Month::JAN;
	int value = (int)m;		//enum class만든 m은 정수로 강제 형변환 필요
	//이렇게 해줘야 enum class에서 Integer로 들어갈 수 있다.

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