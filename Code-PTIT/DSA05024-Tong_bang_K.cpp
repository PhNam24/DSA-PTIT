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
        int a[n + 5];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int dp[k + 5] = {};
        dp[0] = 1;
        for(int i = 1; i <= k; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(i >= a[j])
                {
                    dp[i] = (dp[i] % mod + dp[i - a[j]] % mod) % mod;
                }
            }
        }
        cout << dp[k];
        cout << endl;
    }
    return 0;
}