#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
/*
	c++ ����ľ�̬��Ա�����Ǽ����й���ġ�
*/
class A {
private:
	
public :
	static int a;
protected:


};

class B : public A {
private:
public:
protected:
};

int A::a = 100;

int main() {

	A a1;
	A a2;
	cout << "=============" << endl;

	cout << a1.a << endl;
	cout << a2.a << endl;

	A::a = 500;
	cout << a1.a << endl;
	cout << a2.a << endl;
	cout << "=============" << endl;
	B::a = 600;
	B b1;
	cout << b1.a << endl;
	cin.get();
	return 0;
}