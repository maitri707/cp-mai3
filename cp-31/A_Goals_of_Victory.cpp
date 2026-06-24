#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll sum = 0;
        for (int i=1; i<n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        cout << -sum << "\n";


        }

    return 0;
}

