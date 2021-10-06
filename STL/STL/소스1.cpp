//가변배열
#include <cstdio>
#include <string>

template <typename T>
class MyArray {
public:
	T* arrayItem;	//	배열 포인터
	int count = 0;	// 배열 요소 몇개?
	int capacity = 8;	//	배열이 최대 한도로 가질 수 있는 크기

	MyArray() {
		arrayItem = new T[capacity];
	}

	virtual ~MyArray() {
		delete[] arrayItem;
	}

	void putValue(T value) {
		if (capacity > count) {
			arrayItem[count] = value;
			count++;
		}
		else {
			printf("배열의 capacity 두배로 늘어남\n");
			T* newArray = new T[capacity * 2];
			capacity = capacity * 2;
			for (int i = 0; i < count; i++) {
				newArray[i] = arrayItem[i];
			}
			arrayItem = newArray;
			arrayItem[count] = value;
			count++;
		}
	}
};

int main() {

	MyArray<int> m = MyArray<int>();

	m.putValue(100);
	m.putValue(200);
	m.putValue(300);
	m.putValue(400);
	m.putValue(500);
	m.putValue(600);
	m.putValue(700);
	m.putValue(800);
	m.putValue(900);

	for (int i = 0; i < m.count; i++) {
		printf("%d ", m.arrayItem[i]);
	}

	return 0;
}