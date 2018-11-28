#include <stdio.h>
#include <stdlib.h>

void test01() {
	char str[100] = { 0 };  //初始化方式有问题
	/*for (int x = 0; x < 100; x++) {
	str[x] = 0;
	}*/
	scanf_s("%s", str);
	printf("%s", str);
	system(str);
}

void test02() {
	char str[10] = "calc";
	char *p = &str;
	scanf_s("%s", p);
	printf("%s", p);
	system(p);
}

//字符数组以\0结尾的是字符串。
//字符数组的长度应该大于字符串的长度。
//字符数组的名字被编译器解析为指针。指向第一个字符的地址。
void test03() {
	
	char str[10] = "write";
	char *p = str;
	printf("%x,%x",str,p);
	printf("\n");
	*p = "L";

	printf("%s", p);
	system(p);
}


void test04() {
	char str[30] = "title my name is name";
	system(str);
	char *p = str;
	while (p[0]!= '\0') {
		printf("%c", *p);
		printf("\n");
		p++;

	}
}
//字符数组可以用字符串初始化



int main() {
	//test02();

	//test03();
	test04();
	getchar();
	return 0;
}