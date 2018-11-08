#include <iostream>
#include <string>

void testString() {
	std::string s("hello");
	s.append("world");
	std::cout << s << std::endl;
}

int main() {
	testString();
	system("pause");
	return 0;
}