#include <iostream>

using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			int input = 0;
			cin >> input;
			if (input % 2 != 0) {
				sum += input;
			}
		}
		cout << "#" << test_case << " " << sum << "\n";
	}

	return 0;
}