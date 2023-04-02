#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i]; 
    int dp[m + 5]  = {};
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