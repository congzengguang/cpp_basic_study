// 引用类型.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct student {
	int id;
	string name;
	student(int ids, string names) {
		id = ids;
		name = names;
	}
	student(const student &st) {
		this->id = st.id;
		this->name = st.name;
		cout << "调用拷贝构造函数" << endl;

	}
};
void print_student(struct student s) {
	cout << s.id << " " << s.name << endl;
}

void print_student_point(struct student *sp) {
	cout << sp->id << " " << sp->name << endl;
}
void print_student_refrence(struct student &sr) {
	cout << sr.id << " " << sr.name << endl;
}

int main()
{
	struct student s {10,"zhnagsan"};
	print_student(s);
	print_student_point(&s);
	print_student_refrence(s);
	cin.get();
    return 0;
}

