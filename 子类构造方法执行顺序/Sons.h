#pragma once
#include "Father.h"
#include <iostream>
class Sons : public Father
{
public:
	Sons();
	Sons(int a, int b);
	~Sons();
private:
	int b;
};

