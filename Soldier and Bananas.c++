// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,t,n;
    cin>>k>>t>>n;
    int sum;
    int sum1=0;
    int mn;
    for(int i=1;i<=n;i++)
    {
        sum=k*i;
        sum1=sum1+sum;
    }
    mn= sum1-t;
    if(mn>0)
    {
        cout<<mn<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    
    
}