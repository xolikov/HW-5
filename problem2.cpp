#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] % a[i] == 0) {
                if (j == n - 1) {
                    cout << a[j];
                    return 0;
                }
            }
            else break;
        }
    }
    cout << -1;
    return 0;
}
