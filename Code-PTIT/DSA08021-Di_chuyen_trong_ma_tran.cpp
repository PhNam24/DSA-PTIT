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
        cin >> m >> n;
        int a[m + 5][n + 5], c[m + 5][n + 5] = {};
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
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
            int i = tmp.first, j = tmp.second;
            int x = a[i][j];
            q.pop();
            if(j + x < n && c[i][j + x] == -1)
            {
                q.push({i, j + x});
                c[i][j + x] = c[i][j] + 1;
            }
            if(i + x < m && c[i + x][j] == -1)
            {
                q.push({i + x, j});
                c[i + x][j] = c[i][j] + 1;
            }
            if(c[m - 1][n - 1] != -1) break;
        }
        cout << c[m - 1][n - 1];
        cout << endl;
    }
    return 0;
}