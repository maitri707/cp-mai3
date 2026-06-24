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

        vector<ll> b(n);

        for(int i=0;i<n;i++)
            cin >> b[i];

        vector<ll> a;

        a.push_back(b[0]);

        for(int i=1;i<n;i++) {

            if(b[i-1] <= b[i]) {
                a.push_back(b[i]);
            }
            else {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }

        cout << a.size() << "\n";

        for(auto x : a)
            cout << x << " ";

        cout << "\n";
    }

    return 0;
}