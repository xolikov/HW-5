#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    auto it = min_element(a.begin(), a.end());
    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % *it != 0) {
            cout << -1;
            return 0;
        }
        else ans = a[i];
    }
    cout << ans;
    return 0;
}
