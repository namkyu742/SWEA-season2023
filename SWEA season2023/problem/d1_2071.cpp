#include <iostream>

using namespace std;

int main() {
	int T = 0;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			int input = 0;
			cin >> input;
			sum += input;
		}
		int result = sum / 10;
		int r = sum % 10;
		if (r > 5) result++;
		cout << "#" << tc << " " << result << "\n";
	}
	return 0;
}