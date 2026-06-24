#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve() {
    string s;
    cin >> s;
    
    int countOfY = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i]=='Y') countOfY++;
    }

    if (countOfY <= 1) cout << "YES\n";
    else cout << "NO\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
