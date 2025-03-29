//#include <iostream>
//#include <string>
//#include <fstream>
//
//int main() {
//	std::ifstream my_file;
//	std::string str;
//
//	my_file.open("my_file.txt");
//
//	my_file >> str;
//
//	std::cout << str;
//
//	my_file.close();
//
//	return 0;
//}


#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::ifstream my_file;
	std::string str;

	my_file.open("my_file.txt");

	while (std::getline(my_file, str)) {
		std::cout << str << std::endl;
	}
	my_file.close();

	return 0;
}