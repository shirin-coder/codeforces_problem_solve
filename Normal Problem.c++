#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        string str;
        cin >> str; 
        
        reverse(str.begin(), str.end());
        
        string result = "";
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'p') {
                result += 'q';
            } else if (str[i] == 'q') {
                result += 'p';
            } else if (str[i] == 'w') {
                result += 'w';
            }
        }

        cout << result << endl;
    }

    return 0;
}