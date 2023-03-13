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
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int dp[m + 5] = {};
    for(int i = 0; i < n; i++)
    {
        for(int j = m; j >= a[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
        }
    }
    cout << dp[m];
    return 0;
}