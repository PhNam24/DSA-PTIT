#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, m, u, dist[1005];
vector<pair<int, int>> ke[1005]; 

void Dijkstra(int u)
{
    dist[u] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({dist[u], u});
    while(pq.size())
    {
        auto tmp = pq.top();pq.pop();
        if(tmp.first <= dist[tmp.second])
        {
            for(auto i : ke[tmp.second])
            {
                if(dist[i.first] > dist[tmp.second] + i.second)
                {
                    dist[i.first] =  dist[tmp.second] + i.second;
                    pq.push({dist[i.first], i.first});
                }
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
            ke[i].clear();
            dist[i] = 1e9;
        }
        cin >> n >> m >> u;
        while(m--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            ke[x].push_back({y, z});
            ke[y].push_back({x, z});
        }
        Dijkstra(u);
        for(int i = 1; i <= n; i++)
        {
            cout << dist[i] << " ";
        }
        cout << endl;
    }
    return 0;
}