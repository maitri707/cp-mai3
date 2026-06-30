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

        ll a[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }

        for(int i=0; i<n; i++) {
            cout << n+1-a[i] << " ";
        }

        cout << "\n";

    }
    
    return 0;
}