#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt1 = 0;

    while (n--) {
        int a, b;
        cin >> a >> b;
        if (b - a >= 2) {
            cnt1++;
        }
    }

    cout << cnt1;
}