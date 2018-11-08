#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person() {
		cout << "无参数构造" << endl;
	}
	~Person() {
		cout << "析构函数，栈解旋会调用析构函数" << endl;
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
		cout << "异常处理" << e  << endl;
	}
}

int main() {
	test(10,0);
	cin.get();
}