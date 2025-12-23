#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mod 1000000007
 
void solve() {
    ll n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n%2==0) n = n/2;
        else n = n*3+1;
    }
    cout << n << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
    return 0;
}
