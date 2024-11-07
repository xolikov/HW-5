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
        if (a[i] % *it == 0) ans = a[i];
        else ans = -1;
    }
    cout << ans;
    return 0;
}
