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
        ll a[n];
        nhap(a);
        ll dp[n] = {};
        dp[0] = a[0];
        dp[1] = max(a[0], a[1]);
        for(int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        }
        cout << dp[n - 1];
        cout << endl;
    }
    return 0;
}