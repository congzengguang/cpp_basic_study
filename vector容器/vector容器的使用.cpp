#include <iostream>
#include <vector>

using namespace std;


int main() {
	vector<int> v1;//无参构造初始化
	int arr[] = {1,2,4,3,5,6};
	vector<int> v2(arr, arr + sizeof(arr) / sizeof(arr[0]));
	vector<int> v3(v2.begin(),v2.end());
	vector<int> v4(v3);

	for (vector<int>::iterator it = v4.begin(); it != v4.end(); it++) {
		cout << *it << endl;
	}
	cout << "=====================================" << endl;
	vector<int> v5;
	v5.assign(v4.begin(),v4.end());



	for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++) {
		cout << *it << endl;
	}
	cout << "=====================================" << endl;
	int arr1[] = { 10,20,40,30,50,60 };
	vector<int> v6(arr1, arr1 + sizeof(arr1) / sizeof(int));
	v6.swap(v2);
	cout << "v6" << endl;
	for (vector<int>::iterator it = v6.begin(); it != v6.end(); it++) {
		cout << *it << endl;
	}
	cout << "v2" << endl;
	for (vector<int>::iterator it1 = v2.begin(); it1 != v2.end(); it1++) {
		cout << *it1 << endl;
	}

	cout << "=====================================" << endl;



	cin.get();
	return 0;
}