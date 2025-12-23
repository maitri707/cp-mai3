#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mod 1000000007

void solve() {
    ll n;
    cin >> n;
    ll moves = 0;
    ll maxSoFar = 0;
    for(int i=0; i<n; i++) {
        ll x;
        cin >> x;

        if(x<maxSoFar) {
            moves += maxSoFar - x;
        }
        else maxSoFar = x;
    }
    cout << moves << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
