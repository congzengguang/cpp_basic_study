#include <stdio.h>
#include <stdlib.h>
int a = 10;
int b = 20;

int maxdata(int a, int b) {
	printf("���");
	return a > b ? a : b;
};
int mindata(int a, int b) {
	printf("��С");
	return a < b ? a : b;
};
int adddata(int a, int b) {
	printf("���");
	return a + b;
};

int run(int a, int b, int(*p)(int, int)) {
	return p(a,b);
	
}

void main() {
	int a = 1;
	scanf_s("%d",&a);

	switch (a) {
		case 1:
			run(a, b, maxdata);
			break;
		case 2:
			run(a, b, mindata);
			break;
		case 3:
			run(a, b, adddata);
			break;
	default:
		break;
	}
	printf("\n");

	system("pause");
}