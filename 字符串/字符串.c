#include <stdio.h>
#include <stdlib.h>

void test01() {
	char *str = "hello ×Ö·û´®";
	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof("hello ×Ö·û´®"));
}

void test02() {
	char str[10] = "write";
	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof("write"));
}

void main() {
	//system("calc");
/*
	char str[5] = "calc";
	system(str);*/

	//test01();

	test02();


	getchar();
}