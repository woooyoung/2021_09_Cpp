#include <cstdio>
//클래스 내부의 enum

class Calender {
public:
	enum Month {
		JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
	};
};

int main() {

	//Calender::Month m = Calender::Month::JAN;
	Calender::Month m = Calender::JAN;

	printf("%d\n", m);

	switch (m)
	{
	case Calender::Month::JAN:
		printf("1월 입니다.\n");
		break;
	case Calender::Month::FEB:
		printf("2월 입니다.\n");
		break;
	case Calender::Month::MAR:
		printf("3월 입니다.\n");
		break;
	case Calender::Month::APR:
		printf("4월 입니다.\n");
		break;
	case Calender::Month::MAY:
		printf("5월 입니다.\n");
		break;
	case Calender::Month::JUN:
		printf("6월 입니다.\n");
		break;
	case Calender::Month::JUL:
		printf("7월 입니다.\n");
		break;
	case Calender::Month::AUG:
		printf("8월 입니다.\n");
		break;
	case Calender::Month::SEP:
		printf("9월 입니다.\n");
		break;
	case Calender::Month::OCT:
		printf("10월 입니다.\n");
		break;
	case Calender::Month::NOV:
		printf("11월 입니다.\n");
		break;
	case Calender::Month::DEC:
		printf("12월 입니다.\n");
		break;
	default:
		break;
	}

	return 0;
}