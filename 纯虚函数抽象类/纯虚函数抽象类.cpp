#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

class Shape {
private:
public:
	virtual int getArea() = 0;

};

class Reat :public Shape {

private:
	int a;
public:
	Reat(int a) {
		this->a = a;
	}
	virtual int getArea() {
		cout << "正方形的面积：" << endl;
		return a * a;
	}
};

class Circle :public Shape {

private:
	int r;
public:
	Circle(int r) {
	
		this->r = r;
	}

	virtual int getArea() {
		cout << "圆形的面积：" << endl;
		return 3.14*r*r;
	}
};

int main() {
	

	Shape *s = new Reat(5);
	Shape *c = new Circle(3);
	cout << s->getArea() << endl;
	cout << c->getArea() << endl;
	cin.get();
	return 0;
}