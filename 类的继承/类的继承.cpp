#include <iostream>
#include <string>
using namespace std;
class A {
private:
	//int a;
public:
	A() {};
	A(int a) {
		this->a = a;
	};
	int a;

};
class B :public A{
public:
	B() {};
	void func() {
		cout << a << endl;
	}
};


int main() {
	cout << "" << endl;
	B b;
	b.func();
	return 0;
}