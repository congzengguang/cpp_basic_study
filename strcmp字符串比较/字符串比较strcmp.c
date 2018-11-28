#include <stdio.h>
#include <stdlib.h>


void main() {
	
	char str1[50] = "hello1";
	char str2[50] = "hello2";
	int p = strcmp(str1,str2);
	printf("字符串比较%d", p);  //大于0，第一个字符串比较大，小于0 第一个字符串比较小，等于0 相等。
	getchar();
}