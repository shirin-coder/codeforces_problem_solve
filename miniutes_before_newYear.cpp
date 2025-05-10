#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int h,m;
	    cin>>h>>m;
	    int hr = h*60;
	    int minn = 1440 - m;
	    cout<< minn - hr<<endl;
	}
 
}