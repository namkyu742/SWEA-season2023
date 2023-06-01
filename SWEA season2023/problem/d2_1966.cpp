#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T = 0;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int N = 0;
		cin >> N;
		vector<int> vect(N, 0);
		vector<int> vect2(N, 0);
		for (int i = 0; i < N; i++) {
			cin >> vect[i];
		}

		for (int i = 0; i < N; i++) {
			int selected = 9999999;
			int index = -1;
			for (int j = 0; j < N; j++) {
				if (selected > vect[j]) {
					selected = vect[j];
					index = j;
				}
					
			}
			vect2[i] = selected;
			vect[index] = 10000000;
		}




		cout << "#" << tc << " ";

		for (int i = 0; i < N; i++) {
			cout << vect2[i] << " ";
		}

		cout << "\n";
	}

	return 0;
}