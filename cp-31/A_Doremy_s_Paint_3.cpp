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
        unordered_map<int, int> freq;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
        if (freq.size() == 1) {
            cout << "Yes\n";
        }
        else if (freq.size() == 2) {
            bool ok = false;

            for (auto it : freq) {
                if (it.second == n/2 || it.second == (n+1)/2) {
                    ok = true;
                }
            }
            cout << (ok?"Yes\n":"No\n");
        }
        else {
            cout << "No\n";
        }

    }
    return 0;
}

