#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, m, s, visited[1005], parent[1005];
vector<int> ke[1005];

void BFS(int s, int e)
{
    for(int i = 0; i < 1005; i++)
    {
        visited[i] = 0;
    }
    queue<int> q;
    q.push(s);
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
                parent[i] = tmp;
                q.push(i);
            }
        }
    }
    if(!visited[e]) cout << "No path";
    else
    {
        stack<int> st;
        while(s != e)
        {
            st.push(e);
            e = parent[e];
        }
        st.push(s);
        while(st.size())
        {
            cout << st.top() << " ";
            st.pop();
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
            parent[i] = 0;
        }
        cin >> n >> m >> s;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            if(i == s) continue;
            BFS(s, i);
            cout << endl;
        }
    }
    return 0;
}