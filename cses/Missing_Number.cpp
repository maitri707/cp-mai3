#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mod 1000000007
 
void solve() {
    ll n ;
    cin >> n;

    ll expSum = n*(n+1)/2;
    ll actSum = 0;

    for(int i=0; i<n-1; i++) {
        ll x;
        cin >> x;
        actSum += x;
    }
    cout << expSum - actSum << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
