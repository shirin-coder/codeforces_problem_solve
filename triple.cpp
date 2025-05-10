#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);  
    cin.tie(0);  
    
    int test;
    cin >> test;
 
    while (test--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        unordered_map<int, int> freqMap;
        for (int i = 0; i < n; i++) {
            freqMap[a[i]]++;
        }
 
        bool found = false;
        for (const auto& pair : freqMap) {
            if (pair.second >= 3) {
                cout << pair.first << endl;
                found = true;
                break;  
            }
        }
 
        if (!found) {
            cout << "-1" << endl;
        }
    }
 
    return 0;
}