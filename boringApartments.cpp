#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int test;
    cin >> test;
    while (test--) {
        int num;
        cin >> num;
        int tmp = num;
        int cnt = 0;
        while (tmp > 0) {
            cnt++;
            tmp = tmp / 10;
        }
 
        int last_digit = num % 10;
        int row_value = (last_digit - 1) * 10;
 
        int val1 = 9;
        int val2 = 7;
        int val3 = 4;
        int mn;
 
        if (cnt == 1) {
            mn = 10 - val1;
            cout << row_value + mn << endl;
            continue;
        } else if (cnt == 2) {
            mn = 10 - val2;
            cout << row_value + mn << endl;
            continue;
        } else if (cnt == 3) {
            mn = 10 - val3;
            cout << row_value + mn << endl;
            continue;
        } else if (cnt == 4) {
            row_value = row_value + 10;
            cout << row_value << endl;
            continue;
        }
    }
    return 0;
}