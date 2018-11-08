#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class A {
private:
	char *p;
public:
	A() {
		cout << "A()" << endl;
		this->p = new char[64];
		memset(this->p,0,64);
		strcpy_s(this->p,64,"Hello A");
	};
	virtual ~A() {
		cout << "~A()" << endl;
		if (this->p != NULL) {
			delete this->p;
			this->p = NULL;
		}
	};

	virtual void print() {
		cout << "A 的 prin()方法" << endl;
	}
};

class B :public A {
private :
	char *p;
public:
	B() {
		cout << "B()" << endl;
		this->p = new char[64];
		memset(this->p,0,64);
		strcpy_s(this->p,64,"hello B");
	}
	virtual ~B() {
		cout << "~B()" << endl;
		if (this->p != NULL) {
			delete  this->p;
			this->p = NULL;
		}
	}

	virtual void print() {
		cout << "A 的 prin()方法" << endl;
	};
};

void print(A *a) {
	a->print();
	delete a;
}

int main() {
	A a;
	B b;
	print(&a);
	print(&b);
	return 0;
}