#include "User.h"



User::User()
{
}


User::~User()
{
}
User::User(int a, string b) {
	this->a = a;
	this->b = b;
}

ostream& operator<<(ostream &out, User &user) {
	out << "User a:" << user.a << "\n" << "User b:" << user.b << endl;
	return out;
}