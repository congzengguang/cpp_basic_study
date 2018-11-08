// 面向对象的概念.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
	string name;
	void eat(const char *food) {
		cout << name<< "吃" << food << endl;
	}
};

void eat(Dog &dog,const char *food) {
	cout << dog.name << "吃" << food << endl;
}

int main()
{

	Dog dog;
	dog.name = "狗";
	dog.eat("翔");
	eat(dog,"翔");
	cin.get();
    return 0;
}

