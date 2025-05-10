#include <bits/stdc++.h>
using namespace std;

int main() {
    // Number of test cases
    int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        long long int a[n];
        long long int val;
        long long int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            val = abs(a[i]);
            sum += val;
        }

        cout << sum << endl;
    }

    return 0;
}