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
        ll n;
        cin >> n;
        ll a[n], b[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        ll dp[n][2] = {}; 
        dp[0][1] = b[0];
        dp[0][0] = 0;
        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[i - 1])
            {
                dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + b[i];
                dp[i][0] = dp[i - 1][1];
            }
            else 
            {
                dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + b[i];
                dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]);
            }
        }
        cout << min(dp[n - 1][0], dp[n - 1][1]);
        cout << endl;
    }
    return 0;
}