#include <iostream>
#include <string>
#include <deque>
using namespace std;
void test() {
	deque<int> d;
	d.push_back(10);
	d.push_front(20);
	d.push_back(30);
	d.pop_back();
	d.pop_front();
	for (deque<int>::iterator id = d.begin(); id != d.end(); id++) {
		cout << *id << " ";
	}
}

int main() {
	test();
	system("pause");
	return 0;
}