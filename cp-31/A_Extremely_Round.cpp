#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool check(ll x) {
    ll count_of_digits = 0; 
    ll count_of_zeroes = 0; 
    while (x) {
        if (x % 10 == 0) count_of_zeroes++; 
        count_of_digits++; 
        x /= 10; 
    }
    return count_of_zeroes == count_of_digits - 1;
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> round_numbers;
    for (ll i = 1; i <= 999999; i++)
    {
        if (check(i) == true) round_numbers.push_back(i);
    }

    int t;
    cin >> t;
    while (t--) 
    {
        ll n; 
        cin >> n;

        ll answer = 0; 
        for (int i = 0; i < round_numbers.size(); i++) 
        {
            if (round_numbers[i] <= n) 
                answer++; 
            else
                break; 
        }
        cout << answer << endl;
    }
}
