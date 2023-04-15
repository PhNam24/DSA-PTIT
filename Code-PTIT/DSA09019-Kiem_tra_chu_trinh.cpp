#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, m;
vector<int> ke[1005];

int BFS(int u)
{
    int visited[1005] = {}, parent[1005] = {};
    queue<int> q;
    q.push(u);
    while(q.size())
    {
        u = q.front();
        q.pop();
        visited[u] = 1;
        for(int i : ke[u])
        {
            if(!visited[i])
            {
                visited[i] = 1;
                q.push(i);
                parent[i] = u;
            }
            else if(i != parent[u]) return 1; 
        }
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
        for(int i = 0; i < 1005; i++) ke[i].clear();
        cin >> n >> m;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int check = 0;
        for(int i = 1; i <= n; i++)
        {
            if(BFS(i))
            {
                check = 1;
                break;
            }
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}