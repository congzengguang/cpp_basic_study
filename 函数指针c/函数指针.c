#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void msg() {
	MessageBoxA(NULL,"窗口","窗口",0);
}

int add(int a, int b) {
	return a + b;
}

void main() {

	/*msg();
	add(1,2);
	printf("%p,%p", msg, add);*/
	// 函数指针的增减没有任何意义。
	void(*p)() = msg;
	p();
	int(*pa)(int, int) = add; //函数指针的参数名可以忽略。
	printf("%d", pa(2, 3));

	getchar();
}