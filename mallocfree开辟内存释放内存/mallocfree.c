#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void test01() {
	while (1) {
		void *p = malloc(1024 * 1024 * 1024);//申请内存，如果申请失败，返回null
		Sleep(2000);
		free(p);//释放内存
		Sleep(2000);
	}
}

void test02() {
	int num;
	scanf_s("%d", &num);
	int *p = (int *)malloc(sizeof(int) * num);
	for (int x = 0; x < num; x++) {
		p[x] = x;
	}
	printf("%d", num);
	printf("%d", sizeof(&p));

	for (int i = 0;  i < num; i++) {
		printf("%d", p[i]);
	}
}
void main() {
	
	//test01();
	test02();
	printf("\n");
	system("pause");
}