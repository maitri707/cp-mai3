#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mod 1000000007

void solve() {
    int n;
    cin >> n;
    
    if (n % 3 ==0) {
        cout << "Second\n";
    }
    else cout << "First\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
