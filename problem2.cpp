#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    int mn = INT_MAX;
    for (int i: a) mn = min(mn, i);
    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % mn != 0) {
            cout << -1;
            return 0;
        }
    }
    cout << mn;
    return 0;
}
