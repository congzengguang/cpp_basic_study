#include <iostream>
using namespace std;
#include <stack>

int main() {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	cin.get();
	return 0;
}