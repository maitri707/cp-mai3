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
        int cntOdd = 0;
        int cntEven = 0;

        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]%2!=0) cntOdd++;
            else cntEven++;
        }

        if (cntOdd % 2 == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }   

    }

    return 0;
}