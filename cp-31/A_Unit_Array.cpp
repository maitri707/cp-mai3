#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        ll a[n];

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll posCnt = 0;
        ll negCnt = 0;

        for(ll i = 0; i < n; i++) {
            if(a[i] > 0) posCnt++;
            else if(a[i] < 0) negCnt++;
        }

        ll ops = 0;

        while(posCnt < negCnt || negCnt % 2 == 1) {
            ops++;
            posCnt++;
            negCnt--;
        }

        cout << ops << "\n";

    }
    
    return 0;
}