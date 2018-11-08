#include <iostream>
using namespace std;

template<class T>
class Person {
private:
	T age;
	T id;
public:
	Person(T age, T id) {
		this->age = age;
		this->id = id;
	}

	void print() {
		cout << "id = " << id << ", age = " << age << endl;
	}
};


int main() {

	Person<int> p(10,20);
	p.print();
	cin.get();
	return 0;
}