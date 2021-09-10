#include <iostream>
using namespace std;

int main() {

    const int m = 6;
    const int n = 9;
    int min = 1000000;
    int max = 0;
    int cur_arr_max, cur_arr_min, temp_arr;

    int array[m][n] = {
        { 1, 2, 3, 4, 5, 1, 60, 26, 12},
        { 58, 12, 63, 84, 35, 41, 670, 216, 12},
        { 16, 2222, 36, 41, 25, 61, 602, 263, 162},
        { 11, 26, 37, 44, 51, 14, 680, 216, 142},
        { 11, 42, 39, 46, 51, 1, 60, 26, 102},
        { 19, 212, 37, 434, 56, 18, 60, 276, 172}
    };

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
                cur_arr_max = array[i];
            }
            if (array[i][j] < min) {
                min = array[i][j];
                cur_array_min = array[i];
            }
        }
        if (cur_array_min == cur_array_max) {
            cout << "Массивы совпадают";
        }
        else {
            for (int i = 0; i < m; i++) {
                if (array[i] == cur_array_min) {
                    array[i] = cur_array_max;
                }
                else if (array[i] == cur_array_max) {
                    array[i] = cur_array_min;
                }
            }
        }
    }