#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k; 

        if (n % 2 == 0 || (n - k) % 2 == 0) // y = 0 or y = 1
            cout << "YES" << endl; 
        else
            cout << "NO" << endl; 
    }
    
    return 0;
}