#include <stdio.h>
#include <stdlib.h>
void test01(int a[10]) {
	printf("test01 %x \n", a);
	for (int x = 0; x <10; x++) {
		printf("%d\n",a[x]);
	}
}

void test02(int *a) {
	for (int x = 0; x <10; x++) {
		printf("%d\n", a[x]);
	}
}

int main() {
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("main %x \n", a);
	test01(a);  // 数组没有副本机制，为了节省内存。
	test02(a);
	system("pause");
}