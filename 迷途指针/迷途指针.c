#include <stdio.h>
#include <stdlib.h>

void main() {
	int *p = calloc(10,sizeof(int));
	for (int x = 0; x < 10; x++) {
		p[x] = x;
		printf("%d,%x", p[x], &p[x]);
		printf("\n");
	}
	free(p); //�ͷ�ָ��֮��Ӧ������ָ��ΪNULL p= NULL;
	//����ָ�����ִ������ڴ棬�����������������ݡ�

	for (int x = 0; x < 10; x++) {
		printf("%d,%x", p[x], &p[x]);
		printf("\n");
	}

	system("pause");
}