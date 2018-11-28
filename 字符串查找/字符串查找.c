#include <stdio.h>
#include <stdlib.h>

void main() {
	char str1[100] = "my name is cong";
	char str2[50] = "cong";
	int *p = strstr(str1,str2);

	if (p == NULL) {
		printf("没有找到");
	}
	else {
		printf("找到字符串，%p, %c", p,*p);
	}
	getchar();

}