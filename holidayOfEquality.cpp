#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int size;
    cin>>size;
    vector<int>v1(size);
    for(int i=0;i<size;i++)
    {
        cin>>v1[i];
    }
    auto max_it = max_element(v1.begin(), v1.end());
    int sum = 0, ans;
    for(int i=0;i<size;i++)
    {
        ans = abs(*max_it-v1[i]);
        sum += ans;
    }
    cout<<sum;
 
}