#include <iostream>
using namespace std;
class Parent {
public:
	int a;
	Parent(int a) {
		this->a = a;
	}
};

class Child : public Parent{

public:
	Child(int c_a, int p_a) :Parent(p_a) {
		this->a = c_a;
	}
	int a;

	void printParent() {
		cout << Parent::a << endl;
		cout << this->a << endl;
	}
};

int main() {
	Child c(10,20);
	c.printParent();
	cin.get();
	return 0;
}