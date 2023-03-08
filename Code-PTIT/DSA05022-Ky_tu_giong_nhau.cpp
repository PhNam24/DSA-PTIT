#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int dp[105] = {};
        dp[1] = x;
        for(int i = 2; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
            }
            else dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + z);
        }
        cout << dp[n];
        cout << endl;
    }
    return 0;
}