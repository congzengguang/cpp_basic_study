#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
void test01() {
	char *str = "hello 字符串";
	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof("hello 字符串"));
}

void test02() {
	char str[10] = "write";
	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof("write"));
}

//字符串的输入输出
void test03() {
	//根据键盘输入初始化
	char str[100] = {0};
	scanf_s("%s", str);
	printf("%s", str);
	system(str);
}

//利用指针初始化
void test04() {
	char str[100] = { 0 };
	char *p = "tasklist";
	//scanf_s("%s", p);
	printf("%s", p);
	system(p);
}
void main() {
	//system("calc");
/*
	char str[5] = "calc";
	system(str);*/

	//test01();

	//test02();
	//test03();
	test04();
	getchar();
}