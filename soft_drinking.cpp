#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int mul_1 = k*l;
	int toast_1 = mul_1/nl;
	int limes = c*d;
	int salt = p/np;
	int ans = min(toast_1,min(limes,salt))/n;
	cout<<ans;
}