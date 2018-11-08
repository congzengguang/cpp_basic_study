#include <iostream>
#include <string>
using namespace std;
class Yuebuqun {
public:
	Yuebuqun(string kongfu) {
		this->kongfu = kongfu;
	}
	string kongfu;
	virtual void juezhao() {
		cout << "岳不群打出" << kongfu << endl;
	}
};

class LinPingzhi :public Yuebuqun {
public:
	LinPingzhi(string kongfu) :Yuebuqun(kongfu) {
		this->kongfu = kongfu;
	}
	void juezhao() {
		cout << "林平之打出" << kongfu << endl;
	}
};

void chuzhao(Yuebuqun * lin) {
	lin->juezhao();
}

int main(){
	Yuebuqun  *y = new Yuebuqun("葵花宝典");
	LinPingzhi *l = new LinPingzhi("辟邪剑谱");
	chuzhao(y);
	chuzhao(l);
	cin.get();
	return 0;
}