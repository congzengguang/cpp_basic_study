#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PARSER "HELLO HELLO"
int main(void) {
	
	char str[100];
	scanf("%s", str);
	//strlen��ȡ�ַ����пո�֮ǰ���ַ������ȡ�
	printf("strlen()����������ַ�������:%d", strlen(str));
	printf("\n");
	printf("sizeof��������������ַ������ȣ�%d", sizeof(str));
	printf("\n");
	//��������Ľ����������Ŀո� ��\0'
	printf("sizeof()�궨����ַ������ȣ�%d", sizeof(PARSER));
	printf("\n");
	printf("strlen�궨����ַ������ȣ�%d", strlen(PARSER));
	printf("\n");
	getchar();
	getchar();
	system("pause");
	return 0;

}