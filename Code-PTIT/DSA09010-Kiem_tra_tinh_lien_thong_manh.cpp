#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, m, visited[1005];
vector<int> thuan[1005], nghich[1005];

int BFS(int u, vector<int> ke[1005])
{
    for(int i = 0; i < 1005; i++) visited[i] = 0;
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    int cnt = 0;
    while(q.size())
    {
        u = q.front();
        q.pop();
       
        cnt++;
        for(auto i : ke[u])
        {
            if(!visited[i])
            {
                visited[i] = 1;
                q.push(i);
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
        for(int i = 0; i < 1005; i++)
        {
            thuan[i].clear();
            nghich[i].clear();
        }
        cin >> n >> m;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            thuan[x].push_back(y);
            nghich[y].push_back(x);
        }
        int a = BFS(1, thuan);
        int b = BFS(1, nghich);
        if(a != n) cout << "NO";
        else if(a != b) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}