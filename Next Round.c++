// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    int keep= k-1;
    for(int i=0;i<n;i++)
    {
        
        if(a[i]>0  && a[i]>=a[keep])
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<"0";
    }
    else
    {
        cout<<cnt;
    }
    
   
    
}