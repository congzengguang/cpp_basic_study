#include <stdio.h>
#include <stdlib.h>

void test01() {
	char str[100] = { 0 };  //��ʼ����ʽ������
	/*for (int x = 0; x < 100; x++) {
	str[x] = 0;
	}*/
	scanf_s("%s", str);
	printf("%s", str);
	system(str);
}

void test02() {
	char str[10] = "calc";
	char *p = &str;
	scanf_s("%s", p);
	printf("%s", p);
	system(p);
}

//�ַ�������\0��β�����ַ�����
//�ַ�����ĳ���Ӧ�ô����ַ����ĳ��ȡ�
//�ַ���������ֱ�����������Ϊָ�롣ָ���һ���ַ��ĵ�ַ��
void test03() {
	
	char str[10] = "write";
	char *p = str;
	printf("%x,%x",str,p);
	printf("\n");
	*p = "L";

	printf("%s", p);
	system(p);
}


void test04() {
	char str[30] = "title my name is name";
	system(str);
	char *p = str;
	while (p[0]!= '\0') {
		printf("%c", *p);
		printf("\n");
		p++;

	}
}
//�ַ�����������ַ�����ʼ��



int main() {
	//test02();

	//test03();
	test04();
	getchar();
	return 0;
}