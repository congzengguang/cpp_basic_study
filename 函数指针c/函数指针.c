#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void msg() {
	MessageBoxA(NULL,"����","����",0);
}

int add(int a, int b) {
	return a + b;
}

void main() {

	/*msg();
	add(1,2);
	printf("%p,%p", msg, add);*/
	// ����ָ�������û���κ����塣
	void(*p)() = msg;
	p();
	int(*pa)(int, int) = add; //����ָ��Ĳ��������Ժ��ԡ�
	printf("%d", pa(2, 3));

	getchar();
}