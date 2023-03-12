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
        pair<int, int> p[n];
        for(int i = 0; i < n; i++)
        {
            cin >> p[i].first >> p[i].second;
        }
        sort(p, p + n);
        int dp[n] = {};
        int ans = -1e9;
        for(int i = 0; i < n; i++)
        {
            dp[i] = 1;
            for(int j = 0; j < i; j++)
            {
                if(p[i].first > p[j].second) dp[i] = max(dp[i], dp[j] + 1);
                ans = max(ans, dp[i]);
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}