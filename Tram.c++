#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum,track,sum1,track1;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(i==1)
        {
            sum=a+b;
       
            track=sum;
            v.push_back(track);
        
        }
        if(i>1)
        {
            track1=track-a;
 
            sum1=track1+b;
         
            track=sum1;
            v.push_back(track);
        
        }
         
        
    }
    int max_value = *max_element(v.begin(), v.end());
    cout<<max_value;
}