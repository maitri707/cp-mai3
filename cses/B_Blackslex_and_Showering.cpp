#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll total = 0;
    for (int i = 0; i < n - 1; i++) {
        total += abs(a[i] - a[i + 1]);
    }

    ll maxSave = max(abs(a[0] - a[1]), abs(a[n - 1] - a[n - 2]));

    for (int i = 1; i < n - 1; i++) {
        ll gain = (ll)abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1]);
        ll loss = abs(a[i - 1] - a[i + 1]);
        maxSave = max(maxSave, gain - loss);
    }

    cout << total - maxSave << "\n";
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