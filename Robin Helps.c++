#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k; 
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int index = -1, keep = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                keep = a[i];
   
                index = i;
                break;
            }
        }
        
        int cnt = 0;
        for (int i = index + 1; i < n; i++) {
            if (a[i] == 0 && keep > 0) {
                cnt++;

                keep--;
  
            } else if (a[i] >= k) {
         
                keep += a[i];
             
            }
        }
        cout << cnt << endl;
    }
}