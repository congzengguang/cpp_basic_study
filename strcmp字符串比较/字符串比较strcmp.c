#include <stdio.h>
#include <stdlib.h>


void main() {
	
	char str1[50] = "hello1";
	char str2[50] = "hello2";
	int p = strcmp(str1,str2);
	printf("�ַ����Ƚ�%d", p);  //����0����һ���ַ����Ƚϴ�С��0 ��һ���ַ����Ƚ�С������0 ��ȡ�
	getchar();
}