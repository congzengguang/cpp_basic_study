#include <stdio.h>
#include <stdlib.h>

void main() {
	int num;
	scanf_s("%d", &num);
	int *p = (int *)calloc(num, sizeof(int));
	for (int i = 0; i < num; i++) {
		p[i] = i;
		printf("%d,%x",p[i],&p[i]);
		printf("\n");
	}

	int newnum;
	scanf_s("%d", &newnum);
	int *newP = realloc(p,newnum);
	
	//��ʣ����ڴ��ʼ����
	for (int x = num; x < newnum; x++) {
		newP[x] = x;
		printf("%d,%x", newP[x], &newP[x]);
		printf("\n");
	}

	printf("==============================");
	for (int x = 0; x < newnum; x++) {
		newP[x] = x;
		printf("%d,%x", newP[x], &newP[x]);
		printf("\n");
	}

	getchar();
}