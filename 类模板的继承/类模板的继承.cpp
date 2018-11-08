#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

//类模板的继承

template<typename T>
class Animal {
private:
	T age;
public:
	void print() {
		cout << "这是一个什么动物" << endl;
	}
};


template<class B>
class Cat :public Animal<B> {

private:
	B name;
public:
	void print() {
		cout << name << endl;
	}
};
int main() {



	return 0;
}