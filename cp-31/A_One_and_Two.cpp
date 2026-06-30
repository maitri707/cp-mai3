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

        int total_number_of_twos = 0; 
        int current_number_of_twos = 0; 

        for (int i = 0; i < n; i++) 
        {
            if (a[i] == 2) 
                total_number_of_twos++;
        } 

        int ans = -1; 

        for (int i = 0; i < n; i++) 
        {
            if (a[i] == 2) 
                current_number_of_twos++; 

            if ((current_number_of_twos) == (total_number_of_twos - current_number_of_twos))
            {
                ans = i + 1; //for 1-based indexing
                break; 
            }
        }

        cout << ans << endl;
    }
}

