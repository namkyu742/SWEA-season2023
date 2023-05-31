#include <iostream>

using namespace std;

int main() {
	int A = 0, B = 0;
	cin >> A >> B;

	int result = A - B;

	if (A == B) {
		cout << "ºñ±è";
	}
	else if (result == 1 || result == -2) {
		cout << "A";
	}
	else if (result == 1 || result == -2) {
		cout << "B";
	}
	else {
		cout << "¿¡·¯";
	}

	return 0;
}



//
//
//2 1 1
//3 2 1
//1 3 -2
//
//
//1 2 -1
//2 3 -1
//3 1 2
//
//1 1
//2 2
//3 3