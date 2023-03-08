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
        int x, y, z;
        string a, b, c;
        cin >> x >> y >> z >> a >> b >> c;
        a = "." + a;
        b = "." + b;
        c = "." + c;
        int dp[x + 5][y + 5][z + 5] = {};
        for(int i = 1; i <= x; i++)
        {
            for(int j = 1; j <= y; j++)
            {
                for(int k = 1; k <= z; k++)
                {
                    if(a[i] == b[j] && a[i] == c[k]) dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                    else dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
                }
            }
        }
        cout << dp[x][y][z];
        cout << endl;
    }
    return 0;
}