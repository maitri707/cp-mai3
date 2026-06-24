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
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int ops = 0;
        bool found = false;

        while (x.size() <= 100) {
            if (x.find(s) != string::npos) {
                found = true;
                break;
            }
            x += x;
            ops++;
        }
        if (found) {
            cout << ops << "\n";
        }
        else {
            cout << -1 << "\n";
        }

        }

    return 0;
}

