#include <stdio.h>
#include <stdlib.h>

void main() {
	int a[3] = {1,2,3};
	int *p = a;
	printf("%p,%d", p, a[0]);
	printf("\n");
	*p++;// ++的优先级要高于*的优先级，所以*p是2
	printf("%p,%d", p, *p);
	printf("\n");
	++*p;// ++和变量没有接触，所以不存在优先级，*p得到的值是2，++得到3
	printf("%p,%d", p, *p);
	printf("\n");
	printf("%p,%d", p, *p);
	printf("\n");

	getchar();
}