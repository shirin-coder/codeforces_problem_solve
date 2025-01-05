// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num;
        cin>>num;
        int digit=num%10;
        int n=num/10;
        int sum=digit+n;
        cout<<sum<<endl;
    }
}