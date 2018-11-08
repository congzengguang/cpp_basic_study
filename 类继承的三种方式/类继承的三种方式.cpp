#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
class Parent {
private:
	int pri;
protected:
	int pro;
public:
	int pub;

	void fun() {
		
	}
};

class Child : protected Parent {
private:
	int cpri;
protected:
	int cpro;
public:
	int cpub;
	void fun() {
		//cout << pri << endl;
		cout << pro << endl;
		cout << pub << endl;
	}
};

class Son : public Child {

private:
	int spri;
protected:
	int spro;
public:
	int spub;
	void fun() {
		//cout << pri << endl;
		cout << pro << endl;
		cout << pub << endl;
		//cout << cpri << endl;
		cout << cpro << endl;
		cout << cpub << endl;
	}
};


int main() {
	Parent p;
	Child c;
	Son s;
}