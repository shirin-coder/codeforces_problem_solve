// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int test;
    cin>>test;
    while(test--)
    {
        int x;
        cin>>x;
        int divi= x/2;//6
        int divi2= divi/2;//3
        int divi3=divi%2;//0
        if(divi3==0)
        {
            cout<<divi2<<endl;
            //break;
      
        }
        else if(divi3==1)
        {
            int sum= divi2+divi3;
            cout<<sum<<endl;
            //break;
        
        }
    }
}