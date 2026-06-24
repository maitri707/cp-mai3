#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        vector<string> target(10);

        for(int i = 0; i < 10; i++) {
            cin >> target[i];
        }

        int sum = 0;

        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {

                if(target[i][j] == 'X') {
                    int layer = min({i, j, 9-i, 9-j});
                    sum += layer + 1;
                }

            }
        }

        cout << sum << endl;
    }

    return 0;
}