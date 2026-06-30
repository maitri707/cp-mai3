#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt = 0;
        int maxCnt = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) cnt++;
            else cnt = 0;
            maxCnt = max(maxCnt, cnt);
        }

        cout << maxCnt << "\n";
    }
    
    return 0;
}