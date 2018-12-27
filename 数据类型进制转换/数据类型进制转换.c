#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	scanf("%d",&num);
	printf("你输入的值：%d", num);

	printf("输入值的16进制显示:%X",num);
	printf("\n");
	printf("\n");
	printf("输入值的8进制显示：%o",num);

	long int linum =1 ;
	long long llnum = 1;
	unsigned int uinum = 2;
	signed int sinum = 3;
	long long int llinum = 4;

	printf("输出long int类型的数据：%d\n", linum);
	
	printf("输出long long类型的数据：%lld\n", llnum);
	printf("输出unsigned int类型的数据：%d\n", uinum);
	printf("输出signed int类型的数据：%d\n", sinum);
	printf("输出long long int类型的数据：%lld\n", llinum);

	getchar();
	getchar();
	return 0;
}