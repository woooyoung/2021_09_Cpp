#include <cstdio>
//enum class�� �Ⱦ���?

enum Month {
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

enum Math {
	INC, DEC  // DEC�� �ߺ��ȴ�.
};

int main() {
	Month m = JAN;
	int value = (int)m;

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
	case Month::APR:
		printf("4�� �Դϴ�.\n");
		break;
	case Month::MAY:
		printf("5�� �Դϴ�.\n");
		break;
	case Month::JUN:
		printf("6�� �Դϴ�.\n");
		break;
	case Month::JUL:
		printf("7�� �Դϴ�.\n");
		break;
	case Month::AUG:
		printf("8�� �Դϴ�.\n");
		break;
	case Month::SEP:
		printf("9�� �Դϴ�.\n");
		break;
	case Month::OCT:
		printf("10�� �Դϴ�.\n");
		break;
	case Month::NOV:
		printf("11�� �Դϴ�.\n");
		break;
	case Month::DEC:
		printf("12�� �Դϴ�.\n");
		break;
	default:
		break;
	}

	return 0;
}