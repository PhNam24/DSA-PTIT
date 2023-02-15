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
    int c, n;
    cin >> c >> n;
    int a[n];
    int dp[c + 5] = {};
    nhap(a);
    for(int i = 0; i < n; i++)
    {
        for(int j = c; j >= a[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
        }
    }
    cout << dp[c];
    return 0;
}