#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
            cnt1++;
        }
        else if(a[i]=='D')
        {
            cnt2++;
        }
    }
    if(cnt1>cnt2)
    {
        cout<<"Anton";
    }
    else if(cnt1<cnt2)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}