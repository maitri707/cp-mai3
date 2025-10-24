#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        ll n, x; 
        cin >> n >> x;
        vector<ll> pts_arr; 
        //input
        pts_arr.push_back(0); 
        for (int i = 0; i < n; i++) 
        {
            ll pt;
            cin >> pt; 
            pts_arr.push_back(pt); 
        }
        pts_arr.push_back(x); 
        //end of input

        n = pts_arr.size(); 

        ll max_dist_between_pts = INT_MIN; 
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1) // last pt
                max_dist_between_pts = max(max_dist_between_pts, 2 * (pts_arr[i] - pts_arr[i - 1])); // round trip distance
            else
                max_dist_between_pts = max(max_dist_between_pts, pts_arr[i] - pts_arr[i - 1]); // one-way distance
        }
        cout << max_dist_between_pts << endl; 
    }
    return 0;
}