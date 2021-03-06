// mysql环境配置.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <mysql.h>
#include <iostream>
using namespace std;

void sqlSelect(MYSQL *, char * );

int main()
{
	MYSQL *mysql = NULL;
	mysql = mysql_init((MYSQL *)0);
	mysql_real_connect(mysql,"localhost","root","root","test",0,NULL,0);
	if (mysql) {
		cout << "数据库连接失败" << endl;
	}

	char *commend = (char*)"SELECT * FROM test";
	sqlSelect(mysql,commend);
	mysql_close(mysql);
	system("pause");
	return 0;
}

void sqlSelect(MYSQL *mysql, char *sql) {
	int flag = mysql_real_query(mysql, sql, strlen(sql));
	if (flag) {
		printf("SELECT error :%d \t %s", mysql_errno(mysql), mysql_error(mysql));
		return;
	}
	MYSQL_RES *res = mysql_store_result(mysql);
	MYSQL_FIELD *field = mysql_fetch_fields(res);
	int field_count = mysql_field_count(mysql);

	for (int x=0; x < field_count; x++) {
		printf("列名称：%s\t",field[x].name);
	}

	printf("\n");
	MYSQL_ROW row;
	while (row = mysql_fetch_row(res)) {
		for (int i = 0; i < field_count; i++) {
			printf("%s\t",row[i]);
		}
		cout << "" << endl;
	}


}

