#define _CRT_SECURE_NO_WARNINGS
//연산자 오버로딩   
//+ - * / -> 기본 자료형에만 유효한 연산자
#include <cstdio>
#include <cstring>

class Vector {
public:
	float X;
	float Y;

	Vector() {
		X = 0.0f;
		Y = 0.0f;
	}

	Vector(float x, float y) {
		this->X = x;
		this->Y = y;
	}

};

int main() {

	Vector v1 = Vector(100,200);
	Vector v2 = Vector(1,2);

	Vector v3 = v1 + v2;

	return 0;
}