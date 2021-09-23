#define _CRT_SECURE_NO_WARNINGS
//벡터와 스칼라 곱
#include <cstdio>
#include <cstring>
//3차원 벡터
class Vector3 {
public:
	float X;		
	float Y;
	float Z;

	Vector3() {
		X = 0.0f;
		Y = 0.0f;
		Z = 0.0f;
	}

	Vector3(float x, float y, float z) {
		this->X = x;
		this->Y = y;
		this->Z = z; 
	}

	void printInfo(float x, float y, float z) {
		printf("%.2f, %.2f, %.2f\n", x, y, z);
	}

};

Vector3 operator*(Vector3& v1, float s) {
	return Vector3(v1.X * s, v1.Y * s, v1.Z * s); 
}

int main() {

	Vector3 v = Vector3(10,20,30);

	Vector3 rs = v * 10;

	rs.printInfo(rs.X,rs.Y,rs.Z);

	return 0;
}