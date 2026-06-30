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

        string og;
        cin >> og;

        int ans = n;

        int left = 0;
        int right = n-1;

        while(left<=right) {

            if (og[left] != og[right]) {
                ans -= 2;
            }
            else break;

            left++;
            right--;
        }

        cout << ans << "\n";
        
    }
}