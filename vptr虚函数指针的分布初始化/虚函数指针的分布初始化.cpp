#include <iostream>
#include <string>
using namespace std;


class Parent {
public:
	Parent(int a) {
		this->a = a;
		print();
	};

	virtual void print() {
		cout << "Parent(int )...a =" << a << endl;
	}
private:
	int a;
};
class Child : public Parent{
private:
	int b;
public:
	Child(int a, int b) :Parent(a) {
		this->b = b;
		print();
	}
	virtual void print() {
		cout << "Child(int )... b =" << b << endl;
	}
};

int main() {
	Parent *p = new Child(10,20);
	cin.get();
	return 0;
}