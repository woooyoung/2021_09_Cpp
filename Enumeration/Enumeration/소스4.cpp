#include <cstdio>
//Ŭ���� ������ enum

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
		printf("1�� �Դϴ�.\n");
		break;
	case Calender::Month::FEB:
		printf("2�� �Դϴ�.\n");
		break;
	case Calender::Month::MAR:
		printf("3�� �Դϴ�.\n");
		break;
	case Calender::Month::APR:
		printf("4�� �Դϴ�.\n");
		break;
	case Calender::Month::MAY:
		printf("5�� �Դϴ�.\n");
		break;
	case Calender::Month::JUN:
		printf("6�� �Դϴ�.\n");
		break;
	case Calender::Month::JUL:
		printf("7�� �Դϴ�.\n");
		break;
	case Calender::Month::AUG:
		printf("8�� �Դϴ�.\n");
		break;
	case Calender::Month::SEP:
		printf("9�� �Դϴ�.\n");
		break;
	case Calender::Month::OCT:
		printf("10�� �Դϴ�.\n");
		break;
	case Calender::Month::NOV:
		printf("11�� �Դϴ�.\n");
		break;
	case Calender::Month::DEC:
		printf("12�� �Դϴ�.\n");
		break;
	default:
		break;
	}

	return 0;
}