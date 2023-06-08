#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main() {
	FILE* fp = freopen("input.txt", "rt", stdin);

	int T = 0;
	cin >> T;

	int v[5] = { 2, 3, 5, 7, 11 };

	for (int tc = 1; tc <= T; tc++) {
		int input = 0;
		cin >> input;
		vector<int> result(5, 0);

		for (int i = 0; i < 5; i++) {
			while (input % v[i] == 0) {
				result[i]++;
				input /= v[i];
			}
		}

		cout << "#" << tc << " ";
		for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
		cout << "\n";
	}

	return 0;
}