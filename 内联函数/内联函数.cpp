// 内联函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
inline void printAB(int a, int b) {
	cout << "a = " << a << "b= " << b << endl;
}


int main()
{
	int a = 10, b = 10;
	for (int x = 0; x < 1000;x++) {
		printAB(a, b);
	}
    return 0;
}

