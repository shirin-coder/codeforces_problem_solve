// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int hard=0,easy=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            hard++;
            break;
        }
        else if(a[i]==0)
        {
            easy++;
        }
    }
    
    if(hard==1)
    {
        cout<<"hard";
    }
    else if(easy>=1)
    {
        cout<<"easy";
    }
}