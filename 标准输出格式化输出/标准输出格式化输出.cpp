#include <iostream>
#include <iomanip>
using namespace std;
void test01() {
	int number;
	cin >> number;
	cout << number << endl; 
	cout.unsetf(ios::dec);
	cout.setf(ios::oct);
	cout.setf(ios::showbase);
	cout << number << endl;
}
//通过控制符输出

void test02() {
	int number;
	cin >> number;
	cout << hex
		<< setiosflags(ios::showbase)
		<< setfill('~')
		<< setiosflags(ios::left)
		<< number
		<< endl;
}


int main() {
	test02();
	system("pause");
}
