// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int low=0,upp=0;
   
    for(char c: a)
    {
        if(c>='a'&&c<='z')
        {
            low++;
        }
        else if(c>='A' &&c<='Z')
        {
            upp++;
        }
    }
    if(low>upp)
    {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        cout<<a<<endl;
    }
    else if(upp>low)
    {
        transform(a.begin(),a.end(),a.begin(), ::toupper);
        cout<<a<<endl;
    }
    else if(low==upp)
    {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        cout<<a<<endl;
    }
    
    
}