#include <iostream>
using namespace std;

void fun()throw(int, char, double) {
	throw 'a';
}
//不允许抛出任何异常。。。
void fun02()throw() {
	
}

void test() {
	fun();
}

int main() {
	try {
		test();
	}
	catch(char e) {
		cout << e << endl;
	}
	/*catch (...) {
		cout << "捕获所有的异常。。。" << endl;
	}*/
	cin.get();
}