#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t; 
 
    while (t--) {
        int size, strength;
        cin >> size >> strength;
 
        vector<int> v1(size);
        int cnt = 0, cnt_2 = 0;
        vector<int> v;
 
        for (int i = 0; i < v1.size(); i++) {
            cin >> v1[i];
        }
 
        sort(v1.begin(), v1.end(), greater<int>());
 
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] >= strength) {
                cnt++; 
            } else {
                cnt_2++;
                v.push_back(v1[i]); 
            }
        }
        int teamSize = 0;
        for (int i = 0; i < v.size(); i++) {
            teamSize++;
            if (v[i] * teamSize >= strength) {
                cnt++;      
                teamSize = 0; 
            }
        }
 
        cout << cnt << endl;
    }
 
    return 0;
}