#include <stdio.h>
#include <stdlib.h>

void main() {
	int a[3] = {1,2,3};
	int *p = a;
	printf("%p,%d", p, a[0]);
	printf("\n");
	*p++;// ++�����ȼ�Ҫ����*�����ȼ�������*p��2
	printf("%p,%d", p, *p);
	printf("\n");
	++*p;// ++�ͱ���û�нӴ������Բ��������ȼ���*p�õ���ֵ��2��++�õ�3
	printf("%p,%d", p, *p);
	printf("\n");
	printf("%p,%d", p, *p);
	printf("\n");

	getchar();
}