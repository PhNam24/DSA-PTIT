#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        int a[n][n];
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < n; j++ )
            {
                cin >> a[i][j];
            }
        }
        /*  
            dp[i][mask] là chi phí nhỏ nhất tại thành phố i là thành phố được thăm cuối cùng tại trạng thái mask 
            => KQ : min (dp[i = 0 -> n - 1][(1<<n) - 1])
        */
        long long dp[n][33000];
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < (1<<n); j++ )
            {
                dp[i][j] = 1e9;
            }
        }
        for ( int i = 0; i < n; i++ )
        {
            dp[i][1<<i] = 0;
        }
        for ( int mask = 0; mask < (1<<n); mask++ )
        {
            for ( int i = 0; i < n; i++ )
            {
                for ( int j = 0; j < n; j++ )
                {
                    
                        if ( dp[i][mask] != 1e9 )
                        {
                            if ( (mask & (1 << j)) == 0 ) dp[j][mask | (1 << j)] = min(dp[j][mask | (1 << j)], dp[i][mask] + a[i][j]);
                        }
                    
                }
            }
        }
        long long ans = 1e9;
        for ( int i = 0; i < n; i++ )
        {
            ans = min(ans, dp[i][(1<<n) - 1]);
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}