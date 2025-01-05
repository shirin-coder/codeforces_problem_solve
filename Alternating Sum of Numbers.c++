#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==1)
            {
                sum=sum-a[i];
            }
            else if(i%2==0)
            {
                sum=sum+a[i];
            }
        }
        cout<<sum<<endl;
    }
}