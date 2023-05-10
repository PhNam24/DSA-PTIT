#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
vector<int> ke[100005];

int BFS()
{
    int visited[100005] = {}, dist[100005] = {};
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    dist[1] = 0;
    int ans = 0;
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
                dist[i] = dist[tmp] + 1;
                ans = max(ans, dist[i]);
                q.push(i);
            }
        }
    }
    return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        for(int i = 0; i < 100005; i++) ke[i].clear();
        int n;
        cin >> n;
        while(--n)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        cout << BFS();
        cout << endl;
    }
    return 0;
}