// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    
   
    char s,k;
    char c;
    for(int i=0;i<a.size();i++)
    {
        if(a[0]>='A' &&a[0]<='Z')
        {
            cout<<a<<endl;
            return 0;
        }
        else 
        {
            c=a[0]-32;
            cout<<c;
            break;
        }
    }
    for(int i=1;i<a.size();i++)
    {
        cout<<a[i];
    
    }
    cout<<endl;
    
}