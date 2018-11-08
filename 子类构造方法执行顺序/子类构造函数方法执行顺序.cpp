#include <iostream>
#include <string>
#include "Father.h"
#include "Sons.h"
using namespace std;
int main() {
	Sons *son = new Sons(10,30);
	delete son;
	cin.get();
	return 0;
}