#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int v, e, visited[1005];
vector<int> ke[1005];

int bfs(int u)
{
    int cnt = 0;
    queue<int> q;
    q.push(u);
    while(q.size())
    {
        int tmp = q.front();
        q.pop();
        visited[tmp] = 1;
        cnt++;
        for(auto i : ke[tmp])
        {
            if(!visited[i])
            {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    return cnt == v;
}

int sol()
{
    if(!bfs(1)) return 0;
    else
    {
        int cntc = 0, cntl = 0;
        for(int i = 1; i <= v; i++)
        {
            if(ke[i].size() % 2) cntl++;
            else cntc++;
        }
        if(cntc == v) return 2;
        if(cntl == 2 || cntl == 0) return 1;
    }
    return 0;
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
        cin >> v >> e;
        int x, y;
        while(e--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        cout << sol();
        cout << endl;
    }
    return 0;
}