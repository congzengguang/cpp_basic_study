// 常量赋值.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>

int main()
{
	int a = 10;
	const int &b = a;
	cout << b << endl;
	cout << a << endl;

	cout << "===========================" << endl;

	const int c = 10;
	int &d = c;

	cin.get();
    return 0;
}

