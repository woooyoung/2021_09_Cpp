#include <cstdio>
//�Ϲ����� enum
//Ŭ���� ������ enum
//��ȭ�� enumclass Ÿ���� enum

//playing, paused, win, lose


enum Month { //->���� enum
	JAN = 1, FEB = 20, MAR, APR, MAY = 40, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};


int main() {
	Month m = Month::JAN;

	printf("%d\n", m);

	switch (m)
	{
	case Month::JAN:
		printf("1�� �Դϴ�.\n");
		break;
	case Month::FEB:
		printf("2�� �Դϴ�.\n");
		break;
	case Month::MAR:
		printf("3�� �Դϴ�.\n");
		break;
	case  Month::APR:
		printf("4�� �Դϴ�.\n");
		break;
	case  Month::MAY:
		printf("5�� �Դϴ�.\n");
		break;
	case  Month::JUN:
		printf("6�� �Դϴ�.\n");
		break;
	case  Month::JUL:
		printf("7�� �Դϴ�.\n");
		break;
	case  Month::AUG:
		printf("8�� �Դϴ�.\n");
		break;
	case  Month::SEP:
		printf("9�� �Դϴ�.\n");
		break;
	case  Month::OCT:
		printf("10�� �Դϴ�.\n");
		break;
	case  Month::NOV:
		printf("11�� �Դϴ�.\n");
		break;
	case  Month::DEC:
		printf("12�� �Դϴ�.\n");
		break;
	default:
		break;
	}

	return 0;
}