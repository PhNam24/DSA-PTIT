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
        ll dp[n + 5];
        dp[0] = 1;
        int i2 = 1, i3 = 1, i5 = 1;
        ll ugly_2 = 2, ugly_3 = 3, ugly_5 = 5;
        for(int i = 1; i < n; i++)
        {
            ll tmp = min({ugly_2, ugly_3, ugly_5});
            dp[i] = tmp;
            if(tmp == ugly_2)
            {
                ugly_2 = dp[i2] * 2;
                i2++;
            }
            if(tmp == ugly_3)
            {
                ugly_3 = dp[i3] * 3;
                i3++;
            }
            if(tmp == ugly_5)
            {
                ugly_5 = dp[i5] * 5;
                i5++;
            }
        }
        cout << dp[n - 1];
        cout << endl;
    }
    return 0;
}