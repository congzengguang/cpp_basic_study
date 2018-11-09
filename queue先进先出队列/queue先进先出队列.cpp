#include <iostream>
#include <string>
#include <queue>
using namespace std;
void test() {
	queue<string> q;
	q.push("h");
	q.push("e");
	q.push("l");
	q.push("l");
	q.push("o");
	q.push("!");
	q.pop();
	cout << q.front() << endl;
	cout << q.back() << endl;
}

int main() {
	test();
	cin.get();
	return 0;
}