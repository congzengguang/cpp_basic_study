#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	scanf("%d",&num);
	printf("�������ֵ��%d", num);

	printf("����ֵ��16������ʾ:%X",num);
	printf("\n");
	printf("\n");
	printf("����ֵ��8������ʾ��%o",num);

	long int linum =1 ;
	long long llnum = 1;
	unsigned int uinum = 2;
	signed int sinum = 3;
	long long int llinum = 4;

	printf("���long int���͵����ݣ�%d\n", linum);
	
	printf("���long long���͵����ݣ�%lld\n", llnum);
	printf("���unsigned int���͵����ݣ�%d\n", uinum);
	printf("���signed int���͵����ݣ�%d\n", sinum);
	printf("���long long int���͵����ݣ�%lld\n", llinum);

	getchar();
	getchar();
	return 0;
}