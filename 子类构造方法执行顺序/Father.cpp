#include "Father.h"
#include <iostream>
#include <string>
using namespace std;


Father::Father()
{
	cout << "Father����wu�����Ĺ��캯��" << endl;
}
Father::~Father(){
	cout << "Father�������������" << endl;
}
Father::Father(int a) {
	this->a = a;
	cout << "Father�����в����Ĺ��캯��" << endl;
}
