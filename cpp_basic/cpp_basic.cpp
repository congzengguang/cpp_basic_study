// cpp_basic.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

inline int print(int a, int b) {
	cout << "a = " << a << " b =" << b << endl;
	return 0;
}

int main()
{
	int a = 10;
	int b = 20;
	print(a, b);

    return 0;
}

