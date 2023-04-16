#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

vector<int> ke[10005];
int parent[10005] = {};
int low[10005] = {};
int num[10005] = {};
int visited[10005] = {};
int cnt = 1;
set<int> s;
vector<pair<int, int>> vt;

void dfs(int u)
{
    int cnt_child = 0;
    visited[u] = 1;
    low[u] = num[u] = cnt++;
    for (int i : ke[u])
    {
        if (i == parent[u])
            continue;
        if (visited[i] == 0)
        {
            parent[i] = u;
            cnt_child++;
            dfs(i);
            low[u] = min(low[u], low[i]);
            if (low[i] == num[i])
                vt.push_back({u, i});
            if (low[i] >= num[u] && parent[u] != 0)
                s.insert(u);
        }
        else
            low[u] = min(low[u], num[i]);
    }
    if (parent[u] == 0 && cnt_child > 1)
        s.insert(u);
}

int main()
{
    fast for (int i = 0; i < 105; i++)
    {
        ke[i].clear();
        parent[i] = 0;
        low[i] = 0;
        num[i] = 0;
        visited[i] = 0;
    }
    cnt = 1;
    s.clear();
    vt.clear();
    int v, e;
    cin >> v >> e;
    while (e--)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    dfs(1);
    vector<int> tmp;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
            tmp.push_back(i);
    }
    for (int i : tmp)
        dfs(i);
    cout << s.size() << " " << vt.size();
    return 0;
}