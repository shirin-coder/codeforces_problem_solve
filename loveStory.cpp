#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    // your code goes here
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        int ans , cnt = 0;
        cin>>s;
        if(s[0] == 'c')
        {
            cnt++;
        }
        if(s[1] == 'o')
        {
            cnt++;
        }
        if(s[2] == 'd')
        {
            cnt++;
        }
        if(s[3] == 'e')
        {
            cnt++;
        }
        if(s[4] == 'f')
        {
            cnt++;
        }
        if(s[5] == 'o')
        {
            cnt++;
        }
        if(s[6] == 'r')
        {
            cnt++;
        }
        if(s[7] == 'c')
        {
            cnt++;
        }
        if(s[8] == 'e')
        {
            cnt++;
        }
        if(s[9] == 's')
        {
            cnt++;
        }
        
        ans = 10 - cnt;
        cout<<ans<<endl;
 
        
        
    }
 
 
}