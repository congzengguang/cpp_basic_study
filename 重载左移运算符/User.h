#pragma once
#include <iostream>
#include <string>
using namespace std;
class User
{
public:
	User();
	~User();
	User(int a, string b);
	friend ostream& operator<<(ostream &out, User &user);
private:
	int a;
	string b;
};

