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
        int a[n + 5][m + 5];
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        int dp[n + 5][m + 5];
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                dp[i][j] = 1e9;
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(i * j == 1) dp[i][j] = a[i][j];
                else dp[i][j] = min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]}) + a[i][j];
            }
        }
        cout << dp[n][m];
        cout << endl;
    }
    return 0;
}