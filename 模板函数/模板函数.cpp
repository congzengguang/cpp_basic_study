#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
template <class T>
void mySwap(T &a, T &b) {
	T temp;
	temp = a;
	a =b;
	b = temp;
}



int main() {

	int a = 10;
	int b = 20;
	cout << a << endl;
	cout << b << endl;
	cout << "----------------" << endl;
	//��ʽ�������Ƶ�
	mySwap(a,b);
	
	cout << a << endl;
	cout << b << endl;
	//��ʽ����������
	double c = 1.2;
	double d = 2.3;
	mySwap<double>(c, d);
	cin.get();
	return 0;
}