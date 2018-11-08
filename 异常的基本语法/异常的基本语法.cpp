#include <iostream>
#include <string>

int div01(int a, int b) {
	if (b == 0) {
		throw b;
	}
	return a / b;
}

int main() {
	
	int a{10};
	int b{0};

	try {
		div01(a,b);
	}
	catch (int) {
		std::cout << "³ýÊýÊÇ0" << std::endl;
	}

	std::cin.get();
	return 0;
}