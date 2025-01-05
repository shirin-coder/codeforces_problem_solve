// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a;
    cin>>n>>a;
    int cnt=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==a[i+1])
        {
            cnt++;
        }
    }
    if(cnt>0)
    {
        cout<<cnt<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    
    
    
}