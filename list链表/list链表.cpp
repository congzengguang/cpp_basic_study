#include <iostream>
#include <string>
#include <list>
using namespace std;
void test() {
	list<string> l(10, "hello");
	l.push_back("remove");
	l.insert(l.begin(),"one");
	l.insert(l.end(),"tail");
	list<string> ll(l);
	for (list<string>::iterator it = ll.begin(); it != ll.end(); it++) {
		cout << *it << endl;
	}
	cout << "========================" << endl;
	ll.remove("remove");
	for (list<string>::iterator it = ll.begin(); it != ll.end(); it++) {
		cout << *it << endl;
	}
}

int main() {
	test();
	cin.get();
	return 0;
}