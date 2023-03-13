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
            string a, b;
            cin >> a >> b;
            int n = a.size(), m = b.size();
            int dp[n + 5][m + 5] = {};
            for(int i = 0; i <= n; i++) dp[i][0] = i;
            for(int i = 0; i <= m; i++) dp[0][i] = i;
            for(int i = 1; i <= n; i++)
            {
                for(int j = 1; j <= m; j++)
                {
                    if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1];
                    else dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                }
            }
            cout << dp[n][m];
            cout << endl;
        }
        return 0;
    }