#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
void test01() {
	char *str = "hello �ַ���";
	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof("hello �ַ���"));
}

void test02() {
	char str[10] = "write";
	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof("write"));
}

//�ַ������������
void test03() {
	//���ݼ��������ʼ��
	char str[100] = {0};
	scanf_s("%s", str);
	printf("%s", str);
	system(str);
}

//����ָ���ʼ��
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