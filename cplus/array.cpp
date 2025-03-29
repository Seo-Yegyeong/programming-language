//array1.cpp

/*
#include <iostream>
#include <string>

int main() {
	std::string city[3];

	city[0] = "Turkey";
	city[1] = "Australia";
	city[2] = "Singapore";
	return 0;
}*/

//array2.cpp

/*
#include <iostream>
#include <string>

int main() {
	std::string city[] = { "Turkey", "Australia", "Singapore" };
	return 0;
}
*/

//array3.cpp
/*
#include <iostream>
#include <string>

int main() {
	std::string city[] = { "Turkey", "Australia", "Singapore" };

	for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++) {
		std::cout << city[i] << std::endl;
	}
	return 0;
}
*/