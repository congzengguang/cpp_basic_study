#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void print(int);
void simple_vector_test() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);


	for_each(v.begin(), v.end(), print);

}

void print(int i) {
	cout << i << endl;
}

class Country {
public:
	string address;
	string name;
public:
	Country() {};
	Country(const string address, const string name) :address(address),name(name){}

};

void iterator_test() {
	vector<Country> v;
	Country c1("µÿ÷∑","–’√˚");
	v.push_back(c1);
	for (vector<Country>::iterator it = v.begin(); it != v.end(); it++) {
		cout << (*it).name << endl;
		cout << (*it).address << endl;
	}
}

int main() {
	simple_vector_test();
	iterator_test();
	cin.get();
	return 0;
}