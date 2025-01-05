#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        long long int n, m;
        cin >> n >> m; 
        
        vector<string> words(n);
        vector<int> v;

        for (int i = 0; i < n; i++) {
            cin >> words[i];
            v.push_back(words[i].size());
        }
        
        long long int cnt = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (sum <= m) {
                cnt++;
            }
            if (v[i] > m) {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}