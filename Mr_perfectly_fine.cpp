#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<pair<int, string>> books(n);
        int cnt01 = 0, cnt10 = 0, cnt11 = 0;
        int keep01 = -1, keep10 = -1, keep11 = -1;
 
        for (int i = 0; i < n; ++i) {
            cin >> books[i].first >> books[i].second;
        }
        sort(books.begin(), books.end());
 
        for (int i = 0; i < n; i++) {
            if (books[i].second == "01" && cnt01 == 0) {
                keep01 = books[i].first;
                cnt01++;
            }
            else if (books[i].second == "10" && cnt10 == 0) {
                keep10 = books[i].first;
                cnt10++;
            }
            else if (books[i].second == "11" && cnt11 == 0) {
                keep11 = books[i].first;
                cnt11++;
            }
        }
 
        if (keep01 != -1 && keep10 != -1 && keep11 != -1) {
            cout << min(keep01 + keep10, keep11) << endl;
        }
        else if (keep01 != -1 && keep10 != -1) {
            cout << keep01 + keep10 << endl;
        }
        else if (keep11 != -1) {
            cout << keep11 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
 
    return 0;
}