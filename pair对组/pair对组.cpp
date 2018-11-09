#include <iostream>
#include <string>
using namespace std;

int main() {
	pair<int, int> p(1,2);
	cout << p.first << " " << p.second << endl;
	pair<string, string> p1 = make_pair("hello ", "world");
	cout << p1.first << " " << p1.second << endl;
	system("pause");
	return 0;
}
