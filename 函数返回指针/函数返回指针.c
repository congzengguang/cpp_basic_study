#include <stdio.h>
#include <stdlib.h>

int * mindata(int a[], int arrayLength) {
	int *p = NULL;
	int min = a[0];
	p = &a[0];
	for (int i = 0; i < arrayLength; i++) {
		if (min > a[i]) {
			min = a[i];
			p = &a[i];
		}
	}
	return p;
}

void main() {
	int a[3] = {1,2,3};
	printf("%d", *(mindata(a,3)));
	system("pause");
}