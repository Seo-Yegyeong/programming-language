//#include <iostream>
//
//int main() {
//	int x = 0;
//	int y = 0;
//	int cnt = 1;
//
//	while (x <= 0 || y <= 0) {
//		std::cout << "2���� �ڿ����� �Է��ϼ��� : ";
//		std::cin >> x;
//		std::cin >> y;
//
//		//Test
//		//std::cout << "x�� " << x << ", y�� " << y << "�Դϴ�.\n";
//
//		if (x <= 0 || y <= 0) {
//			std::cout << "�߸� �Է��ϼ̽��ϴ�." << std::endl;
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