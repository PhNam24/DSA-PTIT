#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int X[] = {-1, 0, 1, 0};
int Y[] = {0, 1, 0, -1}; 

int n, m;
char a[55][55];

void BFS(pair<int, int> start)
{
    int cnt = 0;
    queue<pair<int, int>> q;
    q.push(start);
    while(q.size())
    {
        auto tmp = q.front();
        q.pop();
        a[tmp.first][tmp.second] = '#';
        int i1 = tmp.first, j1 = tmp.second;
        i1 = tmp.first + 1;
        while(i1 < n && a[i1][j1] != '#')
        {
            a[i1][j1] = '#';
            cnt++;
            q.push({i1, j1});
            i1++;
        }
        i1 = tmp.first - 1;
        while(i1 >= 0 && a[i1][j1] != '#')
        {
            a[i1][j1] = '#';
            cnt++;
            q.push({i1, j1});
            i1--;
        }
        i1 = tmp.first;
        j1 = tmp.second - 1;
        while(j1 >= 0 && a[i1][j1] != '#')
        {
            a[i1][j1] = '#';
            cnt++;
            q.push({i1, j1});
            j1--;
        }
        j1 = tmp.second+ 1;
        while(j1 < m && a[i1][j1] != '#')
        {
            a[i1][j1] = '#';
            cnt++;
            q.push({i1, j1});
            j1++;
        }
    }
    cout << cnt;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int d = 1;
    test
    {
        cin >> n >> m;
        pair<int, int> start;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if(a[i][j] == '@') start.first = i, start.second = j;
            }
        }
        cout << "Case " << d++ << ": ";
        BFS(start);
        cout << endl;
    }
    return 0;
}