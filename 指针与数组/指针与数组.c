#include <stdio.h>
#include <stdlib.h>

int num[10] = { 1,2,3,4,5,6,7,8,9,0 };

void test02() {
	int num[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%x\n", num);
	for (int x = 0; x < 10; x++) {
		printf("\t %d, %x", num[x],&num[x]);
		printf("\t %d, %x", *(num+x),num+x);
		printf("\n");
		
	}
	system("pause");
}

void test01() {
	int num[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%d\n", sizeof(*num));
	printf("%d", sizeof(num));
	printf("\n%x", num);
	for (int x = 0; x < 10; x++) {
		printf("\n%d, %x", num[x], &num[x]);
		printf("\t%d, %p", num + x, *(num + x));
	}
	system("pause");
}

void test03() {
	int *p = num;//P是变量，num是常量
	for (int x = 0; x < 10; x++) {
		printf("%d,%x \t", num[x], &num[x]);
		printf("%d, %x \n",p[x],&p[x]);
	}
}


void test04() {
	int a[5] = {1,2,3,4,5};
	printf("%x, %x,  \n", a, &a);
	printf("%d, %d", sizeof(*a), sizeof(*(&a)));
	int *p = a;
	int(*pa)[5] = &a;
	printf("\n%d, %d", sizeof(*p), sizeof(*pa));
	printf("\n");
}
void main() {
	//test01();
	//test02();
	//test03();
	test04();


	system("pause");
}
