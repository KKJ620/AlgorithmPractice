#include <iostream>
using namespace std;

const int MAX = 1000000;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int input = 0;

	int minimum = MAX; //초기화
	int maximum = -MAX; //초기화


	for (int i = 0; i < n; i++) {
		cin >> input;
		if (minimum > input) minimum = input;
		if (maximum < input) maximum = input;
	}

	cout << minimum << " " << maximum ;

	return 0;
}
