#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test; 
    while(test--) {
        int a, b,x,y;
        int sum=0;
        cin >> a >> b; 
        vector<int>v;
        for(int i=0;i<a;i++)
        {
            x=1;
            v.push_back(x);
        }
        for(int i=0;i<b;i++)
        {
            y=2;
            v.push_back(y);
        }
        if((a%2 == 1 && b == 0) || (a == 0 && b%2 == 1)) {
            cout << "NO" << endl;
        }
        
        else {
            for(int i=0;i<v.size();i++)
            {
                sum+=v[i];
            }
            if(sum%2==1) cout<<"NO"<<endl;
            else if(sum%2==0)
            {
                if((a%2 == 1 && b == 0) || (a == 0 && b%2 == 1))
                {
                    cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
            
        }
    }
    return 0;
}