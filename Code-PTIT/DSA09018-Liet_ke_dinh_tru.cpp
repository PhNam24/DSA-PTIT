//Dinh tru voi do thi chua biet lien thong hay khong
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int cnt = 1, visited[1005], parent[1005], num[1005], low[1005];
vector<int> ke[1005];
set<int> s;

void dfs(int u)
{
    int cnt_child = 0;
    visited[u] = 1;
    num[u] = low[u] = cnt++;
    for(int i : ke[u])
    {
        if(i == parent[u]) continue;
        if(!visited[i])
        {  
            parent[i] = u;
            cnt_child++;
            dfs(i);
            low[u] = min(low[u], low[i]);
            if(low[i] >= num[u] && parent[u] != 0) s.insert(u);
        }
        else low[u] = min(low[u], num[i]);
    }
    if(parent[u] == 0 && cnt_child > 1) s.insert(u);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        cnt = 1;
        s.clear();
        for(int i = 0; i < 1005; i++)
        {
            visited[i] = low[i] = num[i] = parent[i] = 0;
            ke[i].clear();
        }
        int n, m;
        cin >> n >> m;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        dfs(1);
        for(auto i : s) cout << i << " ";
        cout << endl;
    }
    return 0;
}

//Dinh tru voi do thi da lien thong
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, m, visited[1005];
vector<int> ke[1005];
set<int> s;

void DFS(int u)
{
    visited[u] = 1;
    for(int i : ke[u])
    {
        if(!visited[i])
        {
            DFS(i);
        }
    }
}

void dinhTru()
{
    int i, u;
    for(u = 1; u <= n; u++)
    {
        visited[u] = 1;
        if(u == 1) DFS(2);
        else DFS(1);
        for(i = 1 ; i <= n; i++ ) 
        {
            if(!visited[i]) 
            {
                s.insert(u);
                break;
            }
        } 
        for(int i = 0; i < 1005; i++)
        {
            visited[i] = 0;
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
        s.clear();
        for(int i = 0; i < 1005; i++)
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
        dinhTru();
        for(auto i : s) cout << i << " ";
        cout << endl;
    }
    return 0;
}
