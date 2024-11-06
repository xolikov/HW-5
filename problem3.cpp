#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    for (int i = 0; i < n; i++) if (count(a.begin(), a.end(), a[i]) == 1) cout << a[i];
    return 0;
}
