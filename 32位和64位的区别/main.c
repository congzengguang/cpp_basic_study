#include <stdio.h>
#include <stdlib.h>

// 32位 地址 2^32  
// 64位 地址 2^64

void main() {
	int num = 10;
	int *p = &num;
	printf("%p", p);
	system("pause");
}