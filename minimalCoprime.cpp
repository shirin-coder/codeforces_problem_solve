#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // your code goes here
    long long int test;
    cin >> test;
    while (test--) {
        long long int a, b;
        cin >> a >> b;
        if (a == 1 && b == 1) {
            cout << a << endl; 
            continue; 
        }
        long long int keep = abs(a - b); 
        cout << keep << endl;
    }
    return 0;
}