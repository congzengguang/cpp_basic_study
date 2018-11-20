#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void main() {
	void *p = malloc(sizeof(int)*10);
	free(p);
	//free(p);  //同一内存不能被释放两次。只有空指针可以反复释放。
	system("pause");
}
