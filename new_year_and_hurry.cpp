#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int plms, total_time;
	cin >> plms >> total_time;
 
	long long int rem_time = 240 - total_time; 
	long long int cnt = 0, mul = 0;
 
	for (int i = 1; i <= plms; i++) {
	    mul += 5 * i; 
	    
	    if (mul <= rem_time) {
	        cnt++;
	    } else {
	        break;  
	    }
	}
 
	cout << cnt << endl;  
}