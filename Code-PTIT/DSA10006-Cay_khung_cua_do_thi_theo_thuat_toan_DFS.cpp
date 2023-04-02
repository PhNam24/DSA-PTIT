#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, m, u, visited[1005];
vector<int> ke[1005];
vector<pair<int, int>> vp;

void DFS(int u)
{
    visited[u] = 1;
    for(auto i : ke[u])
    {
        if(!visited[i])
        {
            vp.push_back({u, i});
            DFS(i);
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        for(int i = 0; i < 1005; i++)
        {
            visited[i] = 0;
            ke[i].clear();
        }
        vp.clear();
        cin >> n >> m >> u;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        DFS(u);
        if(vp.size() != n - 1) cout << -1 << endl;
        else
        {
            for(auto i : vp)
            {
                cout << i.first << " " << i.second << endl;
            }
        }
    }
    return 0;
}