#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> a(n), b(n);

        for (int i=0; i<n; i++) cin >> a[i];

        for (int i=0; i<n; i++) cin >> b[i];

        ll ans = LLONG_MAX;

        ll cost = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) ok = false;
            cost += a[i] - b[i];
        }

        if (ok) ans = min(ans, cost);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        cost = c;
        ok = true;

        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) ok = false;
            cost += a[i] - b[i];
        }

        if (ok) ans = min(ans, cost);

        cout << (ans == LLONG_MAX ? -1 : ans) << '\n';
    }
}