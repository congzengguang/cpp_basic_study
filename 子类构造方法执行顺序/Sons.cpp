#include "Sons.h"
using std::cout;
using std::cin;
using std::endl;

Sons::Sons()
{
	cout << "Son����Ĺ��캯��" << endl;
}


Sons::~Sons()
{
	cout << "Son�������������" << endl;
}

Sons::Sons(int a, int b) :Father(a) {
	cout << "���๹�캯����ʵ����" << endl;
	this->b = b;
}