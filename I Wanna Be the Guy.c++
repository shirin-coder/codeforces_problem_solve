#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lvl;
    cin>>lvl;
    vector<int>v;
    vector<int>v1;
    vector<int>v2;
    for(int i=1;i<=lvl;i++)
    {
        v.push_back(i);
    }

    int p,q;
    cin>>p;
    for(int j=0;j<p;j++)
    {
        int p1;
        cin>>p1;
        v1.push_back(p1);
    }
    cin>>q;
    for(int k=0;k<q;k++)
    {
        int q1;
        cin>>q1;
        v2.push_back(q1);
    }
    vector<int> combined;

    combined.insert(combined.end(), v1.begin(), v1.end());
    combined.insert(combined.end(), v2.begin(), v2.end());
    
    sort(combined.begin(),combined.end());
    auto last = unique(combined.begin(), combined.end()); 
    combined.erase(last, combined.end()); 

    if(v==combined)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }

    
}