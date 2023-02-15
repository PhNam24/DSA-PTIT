#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string a, b;
        cin >> a >> b;
        a = '.' + a;
        b = '.' + b;
        int n = a.size(), m = b.size();
        int dp[n + 5][m + 5] = {};
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(a[i] == b[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i][j - 1],  dp[i - 1][j]);
            }
        }
        cout << dp[n][m] - 1;
        cout << endl;
    }
    return 0;
}