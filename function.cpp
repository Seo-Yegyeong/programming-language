//function1.cpp
/*
#include <iostream>

int plus(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x > y ? x - y : y - x;
}

int multiple (int x, int y) {
	return x * y;
}

int devide(int x, int y) {
	return x / y;
}

void main() {
	int x, y;
	std::cout << "두 개의 정수를 입력하세요 : ";
	std::cin >> x >> y;

	std::cout << plus(x, y) << std::endl;
	std::cout << minus(x, y) << std::endl;
	std::cout << multiple(x, y) << std::endl;
	std::cout << devide(x, y) << std::endl;
}
*/

//function2.cpp
/*
#include <iostream>

std::string ** member = new std::string* [3];

void register_member() {
	std::string name, age;

	for (int i = 0; i < 3; i++) {
		std::cout << "이름과 나이를 입력하세요 > ";
		std::cin >> name >> age;

		member[i] = new std::string[2];
		member[i][0] = name;
		member[i][1] = age;
	}
}

void show_member() {
	std::cout << "   이름(나이)   " << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << i + 1 << ") " << member[i][0] << "(" << member[i][1] << ")" << std::endl;
	}
}

void main() {
	register_member();
	show_member();
}
*/