
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int cnt=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='0' &&a[i+1]=='0')
        {
            cnt++;
            if(a[i+2]=='1' && cnt>=6)
            {
                break;
            }
            else if(a[i+2]=='1')
            {
                cnt=0;
            }
            
        }
      
        if(a[i]=='1'&& a[i+1]=='1')
        {
            cnt++;
            if(a[i+2]=='0' && cnt>=6)
            {
                break;
            }
            else if(a[i+2]=='0')
            {
                cnt=0;
            }
           
        }
       
        
    }
    
    if(cnt<=5)
    {
        cout<<"NO"<<endl;
    }
    else if(cnt>=6)
    {
        cout<<"YES"<<endl;
    }
}