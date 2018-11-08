#include <iostream>
using namespace std;

void test01(){
	char s;
	while ((s = cin.get()) != EOF) {
		cout << s << endl;
	}
}

void test02() {
	
	char buffer[1024];
	cin.get(buffer,1025);

	cout << buffer << endl;
}

void test03() {
	char ch;
	cin.get(ch);
	cout << ch << endl;
	cin.ignore();
	cin.get(ch);
	cout << ch << endl;
	cin.get(ch);
	cout << ch << endl;
}

void test04() {
	char ch;
	ch = cin.peek();
	if (ch > '0' && ch < '9') {
		cout << "您输入的是一个数字：" << endl;
		int number;
		cin >> number;
		cout << number << endl;
	}
	else {
		cout << "您输入的是一个字符串" << endl;
		char buffer[256] = {0};
		cin.get(buffer,256);
		cout << buffer << endl;
	}

}

int main() {
	test04();
	cin.get();
	system("pause");
	return 0;
}