#pragma warning (disable: 4996)
//클래스 생성자 / 소멸자
#include <cstdio>
#include <cstring>
//struct Student {
//
//};

class Student {
public:
	int student_no;
	char name[100];
	int gender; // 0-남 1-여

	void printStudentInfo() {
		printf("학생번호 : %d\n", student_no);
		printf("학생이름 : %s\n", name);
		printf("성별 : %s", gender == 0 ? "남자" : "여자");  //인라인 조건절
															// <조건절> ? 값1 : 값2
	}
};

int main() {

	Student s;
	s.student_no = 1234;
	strcpy(s.name, "홍길동");
	s.gender = 0;

	s.printStudentInfo();
	return 0;
}

