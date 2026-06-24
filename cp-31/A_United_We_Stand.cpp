#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll maxi = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            maxi = max(a[i], maxi);
        }

        vector<ll> b, c;

        for (auto num : a) {
            if (num == maxi) c.push_back(num);
            else b.push_back(num);
        }

        if (b.empty()) cout << - 1 << "\n";
        else {
            cout << b.size() << " " << c.size() << "\n";
            for (auto x : b) cout << x << " ";
            cout << "\n";
            for (auto x : c) cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}