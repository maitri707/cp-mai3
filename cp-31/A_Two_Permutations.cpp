#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
 
    while (t--) {
        ll n, a, b; 
        cin >> n >> a >> b;

        if (a+b+2 <=n || (a==b && a==n)) {
            cout << "Yes" << "\n";
        }
        else {
            cout << "No" << "\n";
        }

    }
}