#include <iostream>

using namespace std;

class MyOutOfRangeException :public exception{
public:
	MyOutOfRangeException(char const* error) {
		error = new char[strlen(error) + 1];
		strcpy_s(this->error, 100,error);
	}
	~MyOutOfRangeException() {
		if (error != NULL) {
			delete[] error;
			this->error = NULL;
		}
	}
	virtual char const* what() const {
		return this->error;
	}
private:
	char *error;
};

void func() {
	throw MyOutOfRangeException("自定义的一个异常");
}

int main() {
	try {
		func();
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}

	cin.get();
}