// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int digit;
    vector<int>v;
    vector<char>ch;
    for(char c: a)
    {
        if(c>='0'&&c<='9')
        {
            digit=c-'0';
            v.push_back(digit);
        }
        
    }
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1)
        {
            cout<<v[i]<<" ";
        }
        else
        {
            cout<<v[i]<<"+";
        }
        
    }
    
   
    
}