// 枚举类型.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
enum color{
	red,blue,green
};

void change_value(int &b);

int main()
{
	//cout << color::red << endl;

	int a = 10;
	cout << "a = " << a << endl;

	change_value(a);
	cout << "a = " << a << endl;
	cin.get();
    return 0;
}

void change_value(int &b) {
	b = 50;
}
