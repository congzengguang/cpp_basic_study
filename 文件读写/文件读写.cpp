#include <iostream>
#include <fstream>
using namespace std;
void test01() {
	const char *fileName = "D:\\2018062401_workspace_vs\\cpp_basic\\�ļ���д\\source.txt";
	const char *fileNameout = "D:\\2018062401_workspace_vs\\cpp_basic\\�ļ���д\\target.txt";
	ifstream fs(fileName, ios::in);
	ofstream ofs(fileNameout,ios::out | ios::app);
	if (!fs) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	char ch = NULL;
	while (fs.get(ch)) {
		cout << ch << endl;
		ofs.put(ch);
	}
	fs.close();
	ofs.close();
}

int main() {
	test01();
	system("pause");
}