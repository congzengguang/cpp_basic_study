#include "Father.h"
#include <iostream>
#include <string>
using namespace std;


Father::Father()
{
	cout << "Father父类wu参数的构造函数" << endl;
}
Father::~Father(){
	cout << "Father父类的析构函数" << endl;
}
Father::Father(int a) {
	this->a = a;
	cout << "Father父类有参数的构造函数" << endl;
}
