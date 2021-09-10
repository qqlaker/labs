#include <iostream>
using namespace std;

int main()
{
    int i = 2;
    double sum = 0;
    while (i <= 128) {
        sum += 1 / pow(i, 2);
        i += 2;
    }
    cout << sum;
}