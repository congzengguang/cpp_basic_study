// 静态成员和方法.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class AA {
public:
	static int a;
};

int AA::a = 10;

int main()
{
	AA a;
	a.a = 300;
	AA b;
	b.a = 500;

	cout << a.a << endl;
	cout << b.a << endl;
	cin.get();

    return 0;
}

