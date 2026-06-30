#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll sx, sy, dx, dy; // s-> source , d-> destination, x&y are coordinates
        cin >> sx >> sy >> dx >> dy;

        if (dy<sy) {
            cout << -1 << "\n";
            continue;
        }

        ll moves = dy - sy;
        sx += moves;

        if (sx<dx) {
            cout << -1 << "\n";
            continue;
        }

        moves += (sx-dx);
        cout << moves << "\n";

        
    }
}