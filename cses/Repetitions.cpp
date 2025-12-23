#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mod 1000000007

void solve() {
    string s;
    cin >> s;
    
    int maxLen = 1;
    int currentLen = 1;

    for (int i=1; i<s.size(); i++) {
        if(s[i]==s[i-1]) currentLen++;
        else currentLen=1;

        maxLen = max(maxLen, currentLen);
    }

    cout << maxLen << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
