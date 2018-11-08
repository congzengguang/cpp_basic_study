#include <iostream>
#include <fstream>

class Order {
public:
	Order() {};
	Order(int doc, int status) :doc(doc), status(status) {};
	void print() {
		std::cout << this->doc << std::endl;
		std::cout << this->status << std::endl;
	}
private:
	int doc;
	int status;

};


void writeFileFromFiles() {
	const char *fileNameout = "D:\\2018062401_workspace_vs\\cpp_basic\\对象的序列化\\target.txt";
	Order o(10,20);
	std::ofstream os;
	os.open(fileNameout);
	os.write((char*)&o, sizeof(o));
	os.close();
}
void readFileFromFiles() {
	const char *fileNameout = "D:\\2018062401_workspace_vs\\cpp_basic\\对象的序列化\\target.txt";
	Order o;
	std::ifstream ifs(fileNameout, std::ios::in);
	ifs.read((char*)&o,sizeof(Order));
	o.print();

}

int main() {
	//writeFileFromFiles();
	readFileFromFiles();
	system("pause");
	return 0;
}