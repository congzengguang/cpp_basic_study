#include <stdio.h>
#include <stdlib.h>

void test() {
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	printf("�м���ָ�룺%p, ָ��һ����ά�����ָ�룺%p, ָ��int�������ݵ�ָ�� %p \n", a, &a, *a);
	printf("�м���ָ�룺%d, ָ��һ����ά�����ָ�룺%d, ָ��int�������ݵ�ָ�� %d", sizeof(*a), sizeof(*&a), sizeof(**a));
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");


	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 4; y++) {
			printf("����Ԫ�أ�%d��\t ����ָ�룺%p \n",a[x][y], &a[x][y]);
		}
		printf("\n");
	}
	//a��һ���м����ָ�룬
	printf("%p,%p,%p", a, a + 1, a + 2);
	printf("%p,%p,%p", *a, *a + 1, *a + 2); //��һ�е�����Ԫ�ص�ָ�롣
	printf("%p,%p,%p", *(a + 1), *(a + 1) + 1, *(a + 1) + 2);// �ڶ��е�����Ԫ��
	//a[i][j] = *(*(a+i)+j)  &a[i][j] = *(a+i)+j

	printf("\n");
}

void main() {
	test();
	system("pause");
}