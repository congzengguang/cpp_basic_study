#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void test01() {
	while (1) {
		int *p = (int *)malloc(1024 * 1024 * 100);//√ø√Î…Í«Î100Mb
		free(p);
		Sleep(1000);
	}
}

void test02(int num) {
	int *p = (int *)malloc(sizeof(int)*num);
	for (int x = 0; x < num; x++) {
		p[x] = x + 1;
		printf("%d,%x\n",p[x],&p[x]);
	}
}

void test03(int num) {
	int *p = (int *)malloc(sizeof(int)*num);
	for (int *px = p, i = 0; px < p + num; px++, i++) {
		*px = i + 1;
		printf("%d,%x\n", *px,px);
	}
}
int main() {

	//test01();
	int num;
	scanf_s("%d", &num);
	//test02(num);
	test03(num);
	system("pause");
}