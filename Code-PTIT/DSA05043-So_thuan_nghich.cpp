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
        string s;
        cin >> s;
        s = "." + s;
        int n = s.size();
        int dp[n + 5][n + 5] = {};
        for(int i = n; i > 0; i--)
        {
            for(int j = i; j <= n; j++)
            {
                if(i == j) dp[i][j] = 1;
                else if(s[i] == s[j])
                {
                    if(j - i == 1) dp[i][j] = 1;
                    else dp[i][j] = dp[i + 1][j - 1];
                }
            }
        }
        int ans = -1e9;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(dp[i][j]) ans = max(ans, j - i + 1);
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}