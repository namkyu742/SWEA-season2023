#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main() {
	FILE* freinput = freopen("input.txt", "rt", stdin);

	int T = 0;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		vector<int> input(10, 0);
		int max = -1;
		int min = 10001;
		for (int i = 0; i < 10; i++) {
			cin >> input[i];
			if (max < input[i]) max = input[i];
			if (min > input[i]) min = input[i];
		}
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			sum += input[i];
		}
		sum -= max;
		sum -= min;

		int result = sum / 8;
		int r = sum % 8;
		if (r >= 4) result++;
		// 8로 나누었기 때문에 0~3은 내림, 4~7은 올림

		cout << "#" << tc << " " << result << "\n";

	}
	return 0;
}