#include <stdio.h>
#include <stdlib.h>

void main() {
	char num1 = 'a';
	int num2 = 10;
	double num3 = 1.9;

	void *p1 = &num1;
	p1 = &num2;
	p1 = &num3;

	//printf("%d", *p1);

	printf("ǿ��ת��Ϊdouble��ָ�룺%f", *((double *)p1));

	system("pause");
}