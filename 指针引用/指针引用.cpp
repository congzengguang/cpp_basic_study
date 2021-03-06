#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct teacher {
	int id;
	char name[64];
};

int get_memory_teacher(struct teacher **tpp) {
	teacher *tp = (struct teacher*)malloc(sizeof(struct teacher));
	if (tp == NULL) {
		return -1;
	}
	tp->id = 12;
	strcpy_s(tp->name, "hello c++");

	*tpp = tp;
}

int free_memory_teacher(struct teacher **p) {
	if (p == NULL) {
		return -1;
	}
	struct teacher *t = *p;
	if (t != NULL) {
		free(t);
		*p = NULL;
	}
	return 0;
}

int get_memory_teacher_two(struct teacher* &tpp2) {
	tpp2= (struct teacher*)malloc(sizeof(struct teacher));
	if (tpp2 == NULL) {
		return -1;
	}
	tpp2->id = 10;
	strcpy_s(tpp2->name ,"zhangsanlisi");
	return 0;
}

int free_memory_teacher_two(struct teacher* &tpp2) {
	if (tpp2 == NULL) {
		return -1;
	}
	free(tpp2);
	return 0;
}

int main()
{
	struct teacher *t;
	get_memory_teacher(&t);
	cout << t->id << endl;
	cout << t->name << endl;
	free_memory_teacher(&t);
	cout << "===========================" << endl;
	get_memory_teacher_two(t);
	cout << t->id << endl;
	cout << t->name << endl;
	free_memory_teacher_two(t);
	cin.get();
    return 0;
}

