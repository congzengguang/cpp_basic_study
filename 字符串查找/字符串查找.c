#include <stdio.h>
#include <stdlib.h>

void main() {
	char str1[100] = "my name is cong";
	char str2[50] = "cong";
	int *p = strstr(str1,str2);

	if (p == NULL) {
		printf("û���ҵ�");
	}
	else {
		printf("�ҵ��ַ�����%p, %c", p,*p);
	}
	getchar();

}