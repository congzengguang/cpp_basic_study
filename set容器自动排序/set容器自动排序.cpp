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
		cout << "û�ҵ�Ԫ�أ�" << endl;
	}
	else {
		cout << "ret:"<< *it << endl;
	}

	pair<set<int>::iterator,set<int>::iterator> myret = s.equal_range(2);
	if (myret.first != s.end()) {
		cout << "�ҵ�Ԫ��" << *(myret.first) << endl;
	}
	else {
		cout << "û�ҵ�Ԫ��" << endl;
	}
	if (myret.second != s.end()) {
		cout << "�ҵ�Ԫ��" << *(myret.second) << endl;
	}
	else {
		cout << "û�ҵ�Ԫ��" << endl;
	}


}

int main() {
	testSetFind();
	system("pause");
	return 0;
}