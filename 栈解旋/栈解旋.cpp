#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person() {
		cout << "�޲�������" << endl;
	}
	~Person() {
		cout << "����������ջ�����������������" << endl;
	}

};

int divide(int a, int b) {

	Person p1, p2;
	if (b == 0) {
		return b;
	}
	return a / b;
}

void test(int x, int y) {
	try {
		divide(x,y);
	}
	catch (int e) {
		cout << "�쳣����" << e  << endl;
	}
}

int main() {
	test(10,0);
	cin.get();
}