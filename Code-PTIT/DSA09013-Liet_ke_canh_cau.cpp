//Canh cauvoi do thi chua biet lien thong hay khong
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n, m, cnt, visited[1005], par[1005], num[1005], low[1005];
/*
Num[u]: so thu tu dinh duyet den
Low[u]: gia tri thu tu nho nhat trong cay DFS goc u 
*/
vector<int> ke[1005];
vector<pair<int, int>> v;

void Set()
{
    v.clear();
    cnt = 1;
    for(int i = 0; i < 1005; i++)
    {
        ke[i].clear();
        visited[i] = 0;
        par[i] = 0;
        num[i] = 0;
        low[i] = 0;
    }
}

void DFS_Find_Bridge(int u)
{
    visited[u] = 1;
    num[u] = low[u] = cnt++;
    for(int i : ke[u])
    {
        if(i == par[u]) continue;
        if(!visited[i])
        {
            visited[i] = 1;
            par[i] = u;
            DFS_Find_Bridge(i);
            low[u] = min(low[u], low[i]);
            if(low[i] == num[i])
            {
                if(u < i) v.push_back({u, i});
                else v.push_back({i, u});
            }
        }
        else low[u] = min(low[u], num[i]); 
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        Set();
        cin >> n >> m;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        DFS_Find_Bridge(1);
        sort(v.begin(), v.end());
        for(auto i : v) cout << i.first << " " << i.second << " ";
        cout << endl;
    }
    return 0;
}

//Canh cau voi do thi da lien thong
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n, m, cnt, visited[1005];
vector<int> ke[1005];
vector<pair<int, int>> v;

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

void canhCau()
{
    for(int i = 1; i <= n; i++)
    {
        for(int u = 0; u < ke[i].size(); u++)
        {
            int j = ke[i][u];
            ke[i].erase(ke[i].begin() + u);
            DFS(i);
            for(int k = 1; k <= n; k++)
            {
                if(!visited[k] && i < j)
                {
                    v.push_back({i, j});
                    break;
                }
            }
            ke[i].insert(ke[i].begin() + u, j);
            for(int i = 0; i < 1005; i++)
            {
                visited[i] = 0;
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
        v.clear();
        for(int i = 0; i < 1005; i++)
        {
            ke[i].clear();
            visited[i] = 0;
        }
        cin >> n >> m;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        canhCau();
        sort(v.begin(), v.end());
        for(auto i : v) cout << i.first << " " << i.second << " ";
        cout << endl;
    }
    return 0;
}