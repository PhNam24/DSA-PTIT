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
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] %= k;
        }
        int dp[n + 5][k + 5] = {};
        //dp[i][j] là độ dài dãy con dài nhất tính đến i sao cho tổng dãy con % k = j => KQ bài toán là dp[n - 1][0];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < k; j++)
            {
                dp[i][j] = -1e9;
            }
        }
        dp[0][a[0]] = 1;
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < k; j++)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - a[i] + k ) % k] + 1);
            }       
        }
        cout << dp[n - 1][0];
        cout << endl;
    }
    return 0;
}