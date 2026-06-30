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
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }

        ll totXor = 0;

        for(int i=0; i<n; i++) {
            totXor ^= a[i];
        }

        if (n % 2 == 1) {
            cout << totXor << "\n";
        }
        else {
            if (totXor == 0) {
                cout << totXor << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }
}