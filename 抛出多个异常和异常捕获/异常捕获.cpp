#include <iostream>
using namespace std;

void fun()throw(int, char, double) {
	throw 'a';
}
//�������׳��κ��쳣������
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
		cout << "�������е��쳣������" << endl;
	}*/
	cin.get();
}