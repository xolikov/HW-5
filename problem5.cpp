#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<char> small, big;
    for (char c: s) {
        if (c < 91) big.push_back(c);
        else small.push_back(c);
    }
    cout << big.size() << ' ';
    for (char c: big) cout << c << ' ';
    cout << endl;
    cout << small.size() << ' ';
    for (char c: small) cout << c << ' ';
    return 0;
}
