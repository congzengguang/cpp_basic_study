#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void main() {
	void *p = malloc(sizeof(int)*10);
	free(p);
	//free(p);  //ͬһ�ڴ治�ܱ��ͷ����Ρ�ֻ�п�ָ����Է����ͷš�
	system("pause");
}
