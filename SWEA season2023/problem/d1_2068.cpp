#include <iostream>

using namespace std;

int main() {
	int T = 0;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int result = 0;

		for (int i = 0; i < 10; i++) {
			int input = 0;
			cin >> input;
			if (result < input)
				result = input;
		}
		cout << "#" << tc << " " << result << "\n";
	}
	return 0;
}