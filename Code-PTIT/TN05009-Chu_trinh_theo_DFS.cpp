#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n, m, visited[1005], parent[1005];
vector<int> ke[1005];

int mod = 1e9 + 7;

void DFS(int u)
{
    cout << u << " ";
    visited[u] = 1;
    for(int i : ke[u])
    {
        if(!visited[i])
        {
            parent[i] = u;
            DFS(i);
        }
        else if(i == 1) 
        {
            return;
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
        cin >> n >> m;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        DFS(1);
        cout << 1;
        cout << endl;
    }
    return 0;
}
