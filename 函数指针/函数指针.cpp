// 函数指针.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

typedef int(My_Function)(int,int);
int print(int a, int b) {
	cout << a << " ," << b << endl;
	return 0;
}

typedef int(*Function_p)(int, int);

int main()
{
	My_Function *mf = NULL;
	mf = print;
	mf(10,20);
	Function_p fp = NULL;
	fp = print;
	fp(30,10);
	cin.get();
    return 0;
}

