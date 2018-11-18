#include <stdio.h>
#include <stdlib.h>

void test() {
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	printf("行级别指针：%p, 指向一个二维数组的指针：%p, 指向int类型数据的指针 %p \n", a, &a, *a);
	printf("行级别指针：%d, 指向一个二维数组的指针：%d, 指向int类型数据的指针 %d", sizeof(*a), sizeof(*&a), sizeof(**a));
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");


	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 4; y++) {
			printf("数组元素：%d，\t 数组指针：%p \n",a[x][y], &a[x][y]);
		}
		printf("\n");
	}
	//a是一个行级别的指针，
	printf("%p,%p,%p", a, a + 1, a + 2);
	printf("%p,%p,%p", *a, *a + 1, *a + 2); //第一行的三个元素的指针。
	printf("%p,%p,%p", *(a + 1), *(a + 1) + 1, *(a + 1) + 2);// 第二行的三个元素
	//a[i][j] = *(*(a+i)+j)  &a[i][j] = *(a+i)+j

	printf("\n");
}

void main() {
	test();
	system("pause");
}