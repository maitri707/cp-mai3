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
        vector<int> a(n);

        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        ll minOps = INT_MAX;

        for (int i=0; i<n-1; i++) {
            if (a[i]<=a[i+1]) {
                ll diff = a[i+1] - a[i];
                ll ops = diff/2+1;
                minOps = min(minOps, ops);
            }
            else {
                minOps = 0;
            }
        }
        cout << minOps << "\n";
    }

    return 0;
}