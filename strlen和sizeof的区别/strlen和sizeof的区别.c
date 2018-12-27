#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PARSER "HELLO HELLO"
int main(void) {
	
	char str[100];
	scanf("%s", str);
	//strlen获取字符串中空格之前的字符串长度。
	printf("strlen()函数求出的字符串长度:%d", strlen(str));
	printf("\n");
	printf("sizeof（）函数求出的字符串长度：%d", sizeof(str));
	printf("\n");
	//运算出来的结果包括后面的空格 ‘\0'
	printf("sizeof()宏定义的字符串长度：%d", sizeof(PARSER));
	printf("\n");
	printf("strlen宏定义的字符串长度：%d", strlen(PARSER));
	printf("\n");
	getchar();
	getchar();
	system("pause");
	return 0;

}