#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float x, N, E, c = 1;
	float summ = 0;
	float summ1 = 0;
	float summ2 = 0;
	float summ3 = 0;
	cin >> x >> N >> E;
	for (int i = 2; i < N + 2; i++) {
		if ((i % 2) == 0) {
			float x = 1;
		}
		else {
			float x = -1;
		}
		summ += x * (pow(x, c) / c);
		if (abs((pow(x, c) / c)) > E) {
			summ1 += x * (pow(x, c) / c);
		}
		if (abs((pow(x, c) / c)) > E * 10) {
			summ2 += x * (pow(x, c) / c);
		}
		if (abs((pow(x, c) / c)) > (E / 10)) {
			summ3 += x * (pow(x, c) / c);
		}
	}
	c += 2;
	cout << "sum: " << summ << endl;
	cout << "> E: " << summ1 << endl;
	cout << "> E * 10: " << summ2 << endl;
	cout << "> E / 10: " << summ3 << endl;
	system("pause");
}
