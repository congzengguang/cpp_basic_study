#include <stdio.h>
#include <stdlib.h>

void main() {
	int *p = calloc(10,sizeof(int));
	for (int x = 0; x < 10; x++) {
		p[x] = x;
		printf("%d,%x", p[x], &p[x]);
		printf("\n");
	}
	free(p); //释放指针之后，应该设置指针为NULL p= NULL;
	//否则指针继续执行这块内存，但是数据是垃圾数据。

	for (int x = 0; x < 10; x++) {
		printf("%d,%x", p[x], &p[x]);
		printf("\n");
	}

	system("pause");
}