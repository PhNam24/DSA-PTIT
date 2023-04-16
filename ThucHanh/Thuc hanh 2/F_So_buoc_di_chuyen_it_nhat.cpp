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
        int n, m;
        cin >> n >> m;
        int a[n + 5][m + 5] = {}, c[n + 5][m + 5] = {};
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                c[i][j] = -1;
            }
        }
        queue<pair<int, int>> q;
        q.push({0, 0});
        c[0][0] = 0;
        while(q.size())
        {
            auto tmp = q.front();
            q.pop();
            int i = tmp.first, j = tmp.second;
            int x = abs(a[i][j] - a[i + 1][j]);
            int y = abs(a[i][j] - a[i][j + 1]);
            int z = abs(a[i][j] - a[i + 1][j + 1]);
            //di cheo xuong duoi
            if(z > 0 && i + z < n && j + z < m && c[i + z][j + z] == -1)
            {
                q.push({i + z, j + z});
                c[i + z][j + z] = c[i][j] + 1;
            }
            //di xuong duoi
            if(x > 0 && i + x < n && c[i + x][j] == -1)
            {
                q.push({i + x, j});
                c[i + x][j] = c[i][j] + 1;
            }
            //di sang phai
            if(y > 0 && j + y < m && c[i][j + y] == -1)
            {
                q.push({i, j + y});
                c[i][j + y] = c[i][j] + 1;
            }
            if(c[n - 1][m - 1] != -1) break;
        }
        cout << c[n - 1][m - 1];
        cout << endl;
    }
    return 0;
}