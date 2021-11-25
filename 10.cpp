#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i = 1;
    int count = 0;
    for (; i < n - 1; i++) {
        cout << arr[i] << endl;
        if ((arr[i] > arr[i - 1]) || (arr[i] > arr[i + 1])) {
            count++;
        }
    }
    if (arr[0] > arr[1]) { count++; }
    if (arr[n-1] > arr[n - 2]) { count++; }
    cout << count;
}
