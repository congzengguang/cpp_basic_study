#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test01() {
	int num[10];
	time_t t;
	srand((unsigned int)time(&t));
	
	for (int x = 0; x < 10; x++) {
		num[x] = rand() % 100;
		printf("%d, %x \n", num[x], &num[x]);
	}

	int max =0;
	int maxi = 0;
	//for (int x = 1; x < 10; x++) {
	//	max = num[x];
	//	maxi = x;
	//}

	//printf("%d, %d \n ", max, maxi);

	printf("=================================");
	for (int *p = num; p < num + 10; p++) {
		if (max < *p) {
			max = *p;
		}
	}
	printf("%d, %d \n ", max, maxi);
}

void main() {
	test01();
	getchar();
}