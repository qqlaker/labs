#include <iostream>
using namespace std;

int main() {
	int a;
	int sum = 0;
	const int n = 10;
	bool proverka = 0;
	cin >> a;
	int list[n] = { 6, 132, 54, 12, 534, 234, 123, 65, 101, 99 };
	int min_nechet = 1000000;

	for (int i = 0; i < n; i++) {
		if (list[i] % 2 != 0) {
			if (list[i] < min_nechet) { min_nechet = list[i]; }
		}
		if (proverka == 0) {
			if (list[i] == a) {
				proverka = 1;
			}
		}
		else {
			sum += list[i];
		}
	}
	if (sum != 0) { cout << sum; }
	else { cout << min_nechet; }

}