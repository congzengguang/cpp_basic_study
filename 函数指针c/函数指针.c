#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void msg() {
	MessageBoxA(NULL,"´°¿Ú","´°¿Ú",0);
}

int add(int a, int b) {
	return a + b;
}

void main() {

	/*msg();
	add(1,2);
	printf("%p,%p", msg, add);*/
	void(*p)() = msg;
	p();
	int(*pa)(int, int) = add;
	printf("%d", pa(2, 3));

	getchar();
}