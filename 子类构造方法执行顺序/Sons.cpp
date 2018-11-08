#include "Sons.h"
using std::cout;
using std::cin;
using std::endl;

Sons::Sons()
{
	cout << "Son子类的构造函数" << endl;
}


Sons::~Sons()
{
	cout << "Son子类的析构函数" << endl;
}

Sons::Sons(int a, int b) :Father(a) {
	cout << "子类构造函数的实例化" << endl;
	this->b = b;
}