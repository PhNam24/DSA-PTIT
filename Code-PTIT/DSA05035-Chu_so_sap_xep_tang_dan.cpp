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
        int n;
        cin >> n;
        ll dp[n+5][10];
        for (int i = 0; i < n + 2; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                if (i == 0) dp[i][j] = 0;
                else if (i == 1) dp[i][j] = 1;
                     else if (j == 9 && i != 0) dp[i][j] = 1;
                          else dp[i][j] = 0;
            }
        }
        for (int i = 2; i < n + 5; i++)
        {
            for (int j = 8; j >= 0; j--)
            {
                for (int k = j; k <= 9; k++)
                {
                    (dp[i][j] += dp[i-1][k]) %= mod;
                }
            }
        }
        cout << dp[n+1][0];
        cout << endl;
    }
    return 0;
}