#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, m, u, v, visited[1005], parent[1005];
vector<int> ke[1005];

void BFS(int u)
{
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
                parent[i] = u;
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
            visited[i] = 0;
            parent[i] = 0;
            ke[i].clear();
        }
        cin >> n >> m >> u >> v;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        BFS(u);
        if(!visited[v]) cout << -1;
        else
        {
            stack<int> st;
            while(u != v)
            {
                st.push(v);
                v = parent[v];
            }
            st.push(u);
            while(st.size())
            {
                cout << st.top() << " ";
                st.pop();
            }
        }
        cout << endl;
    }
    return 0;
}