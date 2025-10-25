#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        int dot_count = 0;
        bool has_three = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                dot_count++;
                if (dot_count >= 3)
                    has_three = true;
            } else {
                if (dot_count > 0) {
                    ans += min(dot_count, 2);
                }
                dot_count = 0;
            }
        }

        if (dot_count > 0)
            ans += min(dot_count, 2);

        if (has_three)
            ans = 2;

        cout << ans << "\n";
    }
}
