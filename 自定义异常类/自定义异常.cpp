#include <iostream>
#include <string>
using namespace std;

class MyException {
private:
	string error;
public:
	MyException(string error) {
		this->error = error;
	}
	~MyException() {
		cout << "异常类的析构函数" << endl;
	}

	void print() {
		cout << error << endl;
	}
};

void func() {
	throw MyException("自定义的异常");
}

int main() {
	try {
		func();
	}
	catch (MyException e) {
		e.print();
	}
	
	cin.get();
}