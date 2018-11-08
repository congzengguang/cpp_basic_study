#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
class Father {
private:
public:
	int m;
protected:

};

class Son :virtual public Father {
private:
public:
protected:
};

class Child :virtual public Father {
private:
public:
protected:
};

class Sunzi :public Son, public Child {
private:
public:
protected:
};

int main() {
	Sunzi s;
	s.m = 100;
	cout << s.m << endl;
	cin.get();
	return 0;
}