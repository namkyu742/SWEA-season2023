#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main() {
	FILE* fp = freopen("input.txt", "rt", stdin);

	int T = 0;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		vector<int> result_list(101, 0);
		int number = 0;
		cin >> number;
		int result_value = 0;
		int result = 0;

		for (int i = 0; i < 1000; i++) {
			if (i == 999) 
				int a = 0;
			int input = 0;
			cin >> input; 
			result_list[input]++;
		}

		for (int i = 0; i < 101; i++) {
			if (result_value <= result_list[i]) {
				result_value = result_list[i];
				result = i;
			}
		}

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}