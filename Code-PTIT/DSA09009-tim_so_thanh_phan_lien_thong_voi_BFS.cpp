#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, m, visited[1005];
vector<int> ke[1005];

int BFS_Count()
{
    int cnt = 0;
    queue<int> q;
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            cnt++;
            visited[i] = 1;
            q.push(i);
            while(q.size())
            {
                int tmp = q.front();
                q.pop();
                for(int j : ke[tmp])
                {
                    if(!visited[j])
                    {
                        q.push(j);
                        visited[j] = 1;
                    }
                }
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
        cout << BFS_Count();
        cout << endl;
    }
    return 0;
}