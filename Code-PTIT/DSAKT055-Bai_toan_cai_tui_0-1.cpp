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
        int n, v;
        cin >> n >> v;
        int a[n], b[n];
        int dp[v + 5] = {};
        nhap(a);
        nhap(b);
        for(int i = 0; i < n; i++)
        {
            for(int j = v; j >= a[i]; j--)
            {
                dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
            }
        }
        cout << dp[v];
        cout << endl;
    }
    return 0;
}