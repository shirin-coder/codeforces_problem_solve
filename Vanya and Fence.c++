#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,height;
    int sum1=0,sum2=0;
    cin>>n>>height;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=height)
        {
            sum1=sum1+1;
        }
        if(a[i]>height)
        {
            sum2=sum2+2;
        }
    }
    cout<<sum1+sum2;
}