#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }

        int flag = false;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(__gcd(a[i], a[j]) <= 2) flag = true;
            }
        }
        cout << (flag ? "YES":"NO") << "\n";
    }
}