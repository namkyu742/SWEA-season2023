#include <iostream>

using namespace std;

int main() {
	int input = 0;
	cin >> input;

	int result = 0;
	for (int i = 1; i <= input; i++)
		result += i;

	cout << result;


	return 0;
}