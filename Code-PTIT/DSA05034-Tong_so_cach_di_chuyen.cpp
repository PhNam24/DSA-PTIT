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
        int n, k;
        cin >> n >> k;
        ll dp[n + 5] = {};
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++)
        {
            for(int j = i - k; j < i; j++)
            {
                if(j < 0) continue;
                (dp[i] += dp[j] % mod) %= mod;
            }
        }
        cout << dp[n];
        cout << endl;
    }
    return 0;
}