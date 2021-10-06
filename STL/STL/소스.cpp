#include <cstdio>
#include <string>

template <typename T>
class MyClass {		// 이 클래스 내부에는 타입이 지정되지 않은 무언가가 있다 -> 타입의 지정을 뒤로 미루겠다
public:
	T value;
};

template <typename T>
void swap(T* a, T* b) {
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


int main() {

	MyClass<int>* m = new MyClass<int>();
	m->value = 100;

	printf("%d\n", m->value);

	MyClass<std::string>* ms = new MyClass<std::string>();
	ms->value = "Hello World!";

	printf("%s\n", ms->value.c_str());

	int value1 = 100;
	int value2 = 200;

	swap<int>(&value1, &value2);

	printf("value1 : %d\n", value1);
	printf("value2 : %d\n", value2);

	std::string svalue1 = "Hi";
	std::string svalue2 = "Bye";

	swap<std::string>(&svalue1, &svalue2);

	printf("svalue1 : %s\n", svalue1.c_str());
	printf("svalue2 : %s\n", svalue2.c_str());

	return 0;
}