#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll x, k;
        cin >> x >> k;

        if (x%k==0) {
            cout << 2 << "\n";
            cout << 1 << " " << x - 1 << "\n";
        }
        else {
            cout << 1 << "\n";
            cout << x << "\n";
        }

    }
    
    return 0;
}