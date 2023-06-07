#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	FILE* fp = freopen("input.txt", "rt", stdin);

	int T = 0;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int input = 0;
		cin >> input;

		cout << "#" << tc << "\n";
		cout << input / 50000 << " ";
		input %= 50000;
		cout << input / 10000 << " ";
		input %= 10000;
		cout << input / 5000 << " ";
		input %= 5000;
		cout << input / 1000 << " ";
		input %= 1000;
		cout << input / 500 << " ";
		input %= 500;
		cout << input / 100 << " ";
		input %= 100;
		cout << input / 50 << " ";
		input %= 50;
		cout << input / 10 << "\n";
	}
	return 0;
}