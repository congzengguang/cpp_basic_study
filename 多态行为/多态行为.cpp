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
		cout << "����Ⱥ���" << kongfu << endl;
	}
};

class LinPingzhi :public Yuebuqun {
public:
	LinPingzhi(string kongfu) :Yuebuqun(kongfu) {
		this->kongfu = kongfu;
	}
	void juezhao() {
		cout << "��ƽ֮���" << kongfu << endl;
	}
};

void chuzhao(Yuebuqun * lin) {
	lin->juezhao();
}

int main(){
	Yuebuqun  *y = new Yuebuqun("��������");
	LinPingzhi *l = new LinPingzhi("��а����");
	chuzhao(y);
	chuzhao(l);
	cin.get();
	return 0;
}