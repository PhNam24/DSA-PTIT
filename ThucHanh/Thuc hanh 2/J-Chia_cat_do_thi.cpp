#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, m, visited[105];
vector<int> ke[105];

int BFS(int s)
{
    for(int i = 0; i < 105; i++) 
    {
        visited[i] = 0;
    }
    visited[s] = 1;
    int cnt = 0;
    for(int u = 1; u <= n; u++)
    {
        if(!visited[u])
        {
            visited[u] = 1;
            cnt++;
            queue<int> q;
            q.push(u);
            while(q.size())
            {
                int tmp = q.front();
                q.pop();
                visited[tmp] = 1;
                for(int i : ke[tmp])
                {
                    if(!visited[i])
                    {
                        visited[i] = 1;
                        q.push(i);
                    }
                }
            }
        }
    }
    return cnt;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        for(int i = 0; i < 105; i++) 
        {
            visited[i] = 0;
            ke[i].clear();
        }
        cin >> n >> m;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int tplt = BFS(0);
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            int tmp = BFS(i);
            if(tmp > tplt)
            {
                ans = i;
                tplt = tmp;
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}