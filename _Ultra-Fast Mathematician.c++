#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n1,n2;
    cin >> n1>>n2;
    
    vector<int> v;
    vector<int> v1;
    for (int i = 0; i < n1.size(); i++)
    {
        v.push_back(n1[i] - '0');
    }
    for(int i=0;i<n2.size();i++)
    {
        v1.push_back(n2[i]-'0');
    }
    vector<int> v2;
    for(int j=0;j<n1.size();j++)
    {
        int keep= v[j]-v1[j];
        int keep2=abs(keep);
        v2.push_back(keep2);
    }
    
    for(int x:v2)
    {
        cout<<x;
    }
}