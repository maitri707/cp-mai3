#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n); 
        for (int i = 0; i < n; i++) 
            cin >> a[i];
 
        sort(a.begin(), a.end());
 
        int minE = a[0];
        int maxE = a[n-1];
 
        if (maxE == minE) cout << "NO" << "\n";
 
        else {
            cout << "YES" << "\n";
            cout << maxE << " ";
            for(int i=0; i<n-1; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
 
    }
}