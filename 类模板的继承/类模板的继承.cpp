#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

//��ģ��ļ̳�

template<typename T>
class Animal {
private:
	T age;
public:
	void print() {
		cout << "����һ��ʲô����" << endl;
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