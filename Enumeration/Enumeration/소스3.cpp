#include <cstdio>
//�Ϲ����� enum

enum Month { //->���� enum
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
	Month m = JAN;

	printf("%d\n", m);

	switch (m)
	{
	case JAN:
		printf("1�� �Դϴ�.\n");
		break;
	case FEB:
		printf("2�� �Դϴ�.\n");
		break;
	case MAR:
		printf("3�� �Դϴ�.\n");
		break;
	case APR:
		printf("4�� �Դϴ�.\n");
		break;
	case MAY:
		printf("5�� �Դϴ�.\n");
		break;
	case JUN:
		printf("6�� �Դϴ�.\n");
		break;
	case JUL:
		printf("7�� �Դϴ�.\n");
		break;
	case AUG:
		printf("8�� �Դϴ�.\n");
		break;
	case SEP:
		printf("9�� �Դϴ�.\n");
		break;
	case OCT:
		printf("10�� �Դϴ�.\n");
		break;
	case NOV:
		printf("11�� �Դϴ�.\n");
		break;
	case DEC:
		printf("12�� �Դϴ�.\n");
		break;
	default:
		break;
	}

	return 0;
}