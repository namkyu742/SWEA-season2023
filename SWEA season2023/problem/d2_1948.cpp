#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	FILE* fp = freopen("input.txt", "rt", stdin);

	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int T = 0;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int m1, m2, d1, d2;
		cin >> m1 >> d1 >> m2 >> d2;
		int result = 0;

		if (m1 == m2) {
			result = d2 - d1 + 1;
		}
		else {
			for (int i = m1+1; i < m2; i++) {
				result += days[i];
			}
			result += (days[m1] - d1);
			result += d2 + 1;
		}

		cout << "#" << tc << " " << result << "\n";
	}

	return 0;
}