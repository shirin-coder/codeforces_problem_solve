#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    int fq[26] = {0};
    int cnt=0;
    getline(cin, input);
    for (char ch : input) {
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            fq[index] += 1;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (fq[i] > 0) {
            cnt++;
        }
    }
    if(cnt%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else if(cnt%2==1)
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}