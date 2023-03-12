#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

ll mod = 1e9 + 7;

ll n, k, dp[105][50005];

void count()
{
    for(int i = 0; i <= 100; i++) dp[i][0] = 0;
    for(int i = 0; i <= 50000; i++) dp[0][i] = 0;
    for(int i = 1; i < 10; i++)
    {
        dp[1][i] = 1;
    }
    for(int i = 1; i <= 100; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            for(int k = j; k <= 50000; k++)
            {
                dp[i][k] = (dp[i][k] % mod + dp[i - 1][k - j] % mod) % mod; 
            }
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    count();
    test
    {
        cin >> n >> k;
        cout << dp[n][k];
        cout << endl;
    }
    return 0;
}