#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T = 0;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int result = 0;
		int N = 0, M = 0;
		cin >> N >> M;

		vector<vector<int>> map(N, vector<int>(N, 0));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < N - M + 1; i++) {
			for (int j = 0; j < N- M + 1; j++) {
				int sum = 0;
				for (int p = 0; p < M; p++) {
					for (int q = 0; q < M; q++) {
						sum += map[i + p][j + q];
					}
				}

				if (result < sum)
					result = sum;
			}
		}

		cout << "#" << tc << " " << result << "\n";
	}
	return 0;
}