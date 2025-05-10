#include <iostream>
#include <set>
using namespace std;
 
int main() {
    int t;  
    cin >> t;  
    
    while (t--) {  
        set<int> s;
        int n, value;
        cin >> n;  
        int mul = 1, cnt = 0, ans;  
        for (int i = 0; i < n; i++) {
            cin >> value;
            s.insert(value);  
        }
        for (int x : s) {
            mul *= x;  
        }
        for (int x : s) {
            ans = mul / x;
            cnt++;
        }
 
        cout << cnt << endl;  
    }
    
    return 0;
}