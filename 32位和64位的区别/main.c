#include <stdio.h>
#include <stdlib.h>

// 32λ ��ַ 2^32  
// 64λ ��ַ 2^64

void main() {
	int num = 10;
	int *p = &num;
	printf("%p", p);
	system("pause");
}