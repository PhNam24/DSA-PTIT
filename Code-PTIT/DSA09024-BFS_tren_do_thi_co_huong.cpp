#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n, m, u, visited[1005];
vector<int> ke[1005];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    while (q.size())
    {
        u = q.front();
        cout << u << " ";
        visited[u] = 1;
        q.pop();
        for(int i : ke[u])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
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
            ke[i].clear();
            visited[i] = 0;
        }
        cin >> n >> m >> u;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        BFS(u);
        cout << endl;
    }
    return 0;
}