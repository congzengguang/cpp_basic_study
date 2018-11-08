#include <iostream>
using namespace std;
 
class Parent {
public:
	virtual void func() {
		cout << "Parent:: func()" << endl;
	}
private:
	int a;
protected:

};

class Parent2 {
public:
	void func() {
		cout << "Parent2:: func()" << endl;
	}
private:
	int b;
protected:

};




int main() {
	Parent p1;
	Parent2 p2;
	cout << sizeof(p1) << endl;
	cout << sizeof(p2) << endl;
	cin.get();

	return 0;
}