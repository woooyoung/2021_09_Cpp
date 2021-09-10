#include <iostream>
#include <cstdlib>

struct Person {
	int age;
	int hp;
};

int main() {

	//Person* p1 = (Person*)malloc(sizeof(Person));

	Person* p1 = new Person();

	//int* arr = (int*)malloc(sizeof(int) * 100);

	int* arr = new int[100];
	
	//free(p1);

	//free(arr);

	delete p1;

	delete[] arr;

	printf("Hello World!\n");

	//std::cout << "Hello World!" << std::endl;


	return 0;
}