#include <iostream>
#include <string>

using namespace std;
template <typename T>
void print(T a, T b) {
	cout << "ģ�庯��" << endl;
}


void print(int a, int b ) {
	cout << "��ͨ����" << endl;
}

void test() {
	int a = 10;
	int b = 10;
	char ca = 'a';
	char cb = 'b';

	print<int>(a,b);
}

int main() {


	test();
	cin.get();
	return 0;
}