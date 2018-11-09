#include <iostream>
#include <string>
#include <map>
using namespace std;
void test() {
	map<string, string> m;
	m.insert(pair<string,string>("one","1"));
	m.insert(make_pair("two","2"));
	m.insert(map<string, string>::value_type("three", "3"));
	m["four"] = "4";
	for (map<string, string>::iterator it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << (*it).second << endl;
	}
}

int main() {
	test();
	system("pause");
	return 0;
}