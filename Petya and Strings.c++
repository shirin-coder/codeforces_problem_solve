#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] < b[i]) {
            cout << "-1" << endl;
            return 0;
        } else if(a[i] > b[i]) {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}