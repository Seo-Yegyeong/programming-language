//#include <iostream>
//
//int main() {
//	int x = 0;
//	int y = 0;
//	int cnt = 1;
//
//	while (x <= 0 || y <= 0) {
//		std::cout << "2개의 자연수를 입력하세요 : ";
//		std::cin >> x;
//		std::cin >> y;
//
//		//Test
//		//std::cout << "x는 " << x << ", y는 " << y << "입니다.\n";
//
//		if (x <= 0 || y <= 0) {
//			std::cout << "잘못 입력하셨습니다." << std::endl;
//		}
//	}
//
//	int** arr = new int* [x];
//
//	for (int i = 0; i < x; i++) {
//		arr[i] = new int[y];
//		for (int j = 0; j < y; j++, cnt++) {
//			arr[i][j] = cnt;
//		}
//	}
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++, cnt++) {
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << "\n";
//	}
//
//	return 0;
//}