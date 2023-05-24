#include <iostream>
#include <string>
#include <vector>

using namespace std;

int is369(int num) {
	int cnt = 0;
	if (num < 10) {
		if (num == 3 || num == 6 || num == 9) cnt++;
	}
	else if (num < 100) {
		int a = num / 10;
		int b = num % 10;

		if (a == 3 || a == 6 || a == 9) cnt++;
		if (b == 3 || b == 6 || b == 9) cnt++;
	}
	else {
		int a = num / 100;
		int temp = num % 100;
		int b = temp / 10;
		int c = temp % 10;

		if (a == 3 || a == 6 || a == 9) cnt++;
		if (b == 3 || b == 6 || b == 9) cnt++;
		if (c == 3 || c == 6 || c == 9) cnt++;
	}
	return cnt;
}

int main() {
	int T = 0;
	cin >> T;

	for (int num = 1; num <= T; num++) {
		int value = is369(num);
		if (value == 0) {
			cout << num;
		}
		else {
			for (int i = 0; i < value; i++) {
				cout << "-";
			}
		}
		cout << " ";
	}

	return 0;
}