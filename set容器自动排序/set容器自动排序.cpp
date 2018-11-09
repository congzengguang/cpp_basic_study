#include <iostream>
#include <set>
using namespace std;
void test() {
	set<int> s;
	s.insert(8);
	s.insert(1);
	s.insert(5);
	s.insert(5);
	s.insert(2);
	s.insert(2);
	s.insert(3);
	
	s.erase(s.begin());
	s.erase(2);

	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << "" << endl;
	}
}

void testSetFind() {
	set<int> s;
	s.insert(8);
	s.insert(1);
	s.insert(5);
	s.insert(5);
	s.insert(2);
	s.insert(2);
	s.insert(3);
	set<int>::iterator it = s.find(2);
	if (it == s.end()) {
		cout << "没找到元素！" << endl;
	}
	else {
		cout << "ret:"<< *it << endl;
	}

	pair<set<int>::iterator,set<int>::iterator> myret = s.equal_range(2);
	if (myret.first != s.end()) {
		cout << "找到元素" << *(myret.first) << endl;
	}
	else {
		cout << "没找到元素" << endl;
	}
	if (myret.second != s.end()) {
		cout << "找到元素" << *(myret.second) << endl;
	}
	else {
		cout << "没找到元素" << endl;
	}


}

int main() {
	testSetFind();
	system("pause");
	return 0;
}