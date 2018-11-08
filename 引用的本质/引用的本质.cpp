// 引用的本质.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
struct typeA {
	int *a;
};

struct typeB {
	int &b;
};

void methodA(int *const p) {
	*p = 50;
	cout << *p << endl;
	
}
void methodB(int &pp) {
	pp = 50;
	cout << pp << endl;
}
int main()
{
	cout << sizeof(typeA) << endl;
	cout << sizeof(typeB) << endl;

	int a = 20;
	methodA(&a);
	methodB(a);
	cin.get();
    return 0;
}

