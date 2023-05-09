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
    int n, m;
    cin >> n >> m;
    int w[105][105];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            w[i][j] = 1e9;
        }
        w[i][i] = 0;
    }
    while (m--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if ( x == y ) continue;
        w[x][y] = w[y][x] = z;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                w[i][j] = min(w[i][j], w[i][k] + w[k][j]);
            }
        }
    }
    test
    {
        int x, y;
        cin >> x >> y;
        if ( w[x][y] != 1e9 ) cout << w[x][y];
        else cout << -1;
        cout << endl;
    }
    return 0;
}