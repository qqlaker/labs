#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string strr, s1;
    char n;
    cin >> strr;
    cin >> n;
    for (int i = 0; i < strr.length(); i++) {
        if (strr[i] != n) {
            s1.insert(s1.end(), 2, strr[i]);
        }
    }
    cout << s1 << '\n';
}