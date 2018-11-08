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
		cout << "�쳣�����������" << endl;
	}

	void print() {
		cout << error << endl;
	}
};

void func() {
	throw MyException("�Զ�����쳣");
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