#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int ans = v[0] + 1;
        long long int mul = 1;
        for(int i=1;i<n;i++)
        {
            mul = mul*v[i];
        }
        cout<<mul*ans<<endl;
 
    }
 
}