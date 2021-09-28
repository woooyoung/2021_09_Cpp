//열거형 -> 가독성
//컴파일러 내부적으로 Integer 취급을 받는다.

#include <cstdio>

enum Day {
	SUNDAY = 0, MONDAY, TUESDAY, WEDNESSDAY, THURSDAY, FRIDAY, SATURDAY //열거형 상수(이늄상수,이넘상수)
};

//class Day1 {
//	SUNDAY = 0;
//	MONDAY = 1;
//	TUESDAY = 2;
//	WEDNESSDAY = 3;
//	THURSDAY = 4;
//	FRIDAY = 5;
//	SATURDAY = 6;
//};

int main() {

	Day d = Day::MONDAY;

	return 0;
}