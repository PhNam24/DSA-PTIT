#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
vector<int> ke[1005];

int BFS(int s, int e)
{
    int visited[1005] = {}, dist[1005] = {};
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
                dist[i] = dist[tmp] + 1;
                q.push(i);
            }
            if(visited[e]) return dist[e];
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
        int n;
        cin >> n;
        int x, y;
        while(--n)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int q;
        cin >> q;
        while(q--)
        {
            int x, y;
            cin >> x >> y;
            cout << BFS(x, y);
            cout << endl;
        }
    }
    return 0;
}