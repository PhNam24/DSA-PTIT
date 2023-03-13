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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        int ans1 = -1e9;
        int dp[n] = {};
        nhap(a);
        // int cnt[n] = {};
        // if(a[0] == k) cnt[0] = 1;
        // for(int i = 1; i < n; i++)
        // {
        //     if(a[i] == k) cnt[i] = cnt[i - 1] + 1;
        //     else cnt[i] = 0;
        //     ans1 = max(ans1, cnt[i]);
        // }
        // cout << ans1 << endl;
        if(a[0] == k) dp[0] = 1;
        for(int i = 1; i < n; i++)
        {
            if(__gcd(a[i], a[i - 1]) == k) 
            {
                if(!dp[i - 1]) dp[i - 1]++;
                dp[i] = dp[i - 1] + 1;
            }
            else dp[i] = 0; 
        }
        int ans2 = 1e9;
        for(int i = 0; i < n; i++)
        {
            if(a[i] < a[i - 1])
            {
                int tmp = a[i - 1];
                ans2 = min(ans2, tmp);
            }
            cout << dp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}