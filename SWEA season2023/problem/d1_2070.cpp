#include <iostream>

using namespace std;

int main() {
	int T = 0;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		int a = 0, b = 0;
		cin >> a >> b;

		string result;
		if (a > b) result = ">";
		else if (a < b) result = "<";
		else result = "=";

		cout << "#" << tc << " " << result << "\n";
	}
	return 0;
}