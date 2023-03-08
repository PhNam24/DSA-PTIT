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
        int dp[n + 5] = {};
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        for(int i = 4; i <= n; i++)
        {
            dp[i] = i;
            int m = sqrt(i);
            for(int j = 1; j <= m; j++)
            {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        cout << dp[n];
        cout << endl;
    }
    return 0;
}