#include <iostream>
using namespace std;

int main() {
	char str[100] = "";
	char str2[100] = "";
	char str3[100] = "";
	cin >> str;
	int i = 0;
	int l = 0;
	while (i < strlen(str)) {
		if (str[i] != '(') {
			str2[l] = str[i];
			l++;
		}
		else {
			while (str[i] != ')' && i < strlen(str)) {
				i++;
			}
		}
		i++;
	}
	l = 0;
	i = strlen(str2) - 1;
	while (i != -1) {
		if (str2[i] != ')') {
			str3[l] = str2[i];
			l++; i--;
		}
		else break;
	}
	for (int i = strlen(str3); i != -1; i--) {
		cout << str3[i];
	}
	return 0;
}