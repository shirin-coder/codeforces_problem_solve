// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)
        {
            cout<<a << " "<<b<<endl;
        }
        else if(a > b)
        {
            cout<<b<<" "<<a<<endl;
        }
        else 
        {
            cout<< a << " " << b<<endl;
        }
    }
}