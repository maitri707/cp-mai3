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
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<ll> copy_arr = arr;
        sort(copy_arr.begin(), copy_arr.end());

        if(k > 1 || copy_arr == arr) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

