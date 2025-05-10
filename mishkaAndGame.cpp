#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	int cnt_m = 0, cnt_c = 0;
// 	int sum_m = 0, sum_c = 0;
	for(int i=0;i<n;i++)
	{
	    int m,c;
	    cin>>m>>c;
	    if(m>c)
	    {
	        cnt_m++;
	    }
	    if(c>m)
	    {
	        cnt_c++;
	    }
	}
	if(cnt_m>cnt_c)
	{
	    cout<<"Mishka"<<endl;
	}
	else if(cnt_c>cnt_m)
	{
	    cout<<"Chris"<<endl;
	}
	else
	{
	    cout<<"Friendship is magic!^^"<<endl;
	}
 
}