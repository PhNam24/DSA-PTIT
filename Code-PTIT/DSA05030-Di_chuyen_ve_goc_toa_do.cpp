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
        int n, m;
        cin >> n >> m;
        ll dp[n + 5][m + 5] = {};
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                dp[i][j] = 1;
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = m - 1; j >= 0; j--)
            {
                dp[i][j] = dp[i][j + 1] + dp[i + 1][j];
            }
        }
        cout << dp[0][0];
        cout << endl;
    }
    return 0;
}