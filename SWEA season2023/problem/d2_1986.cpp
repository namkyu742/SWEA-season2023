#include <iostream>

using namespace std;

int main() {
	int T = 0;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int input = 0;
		cin >> input;

		for (int i = 1; i <= input; i++) {
			if (i % 2 == 1) result += i;
			else result -= i;
		}

		cout << "#" << tc << " " << result << "\n";
	}
	return 0;
}