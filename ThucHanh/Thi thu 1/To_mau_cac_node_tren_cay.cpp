#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

vector<int> ke[200005];
int level[200005], visited[200005];

void BFS()
{
    queue<int> q;
    q.push(1);
    level[1] = 1;
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
                level[i] = level[tmp] + 1;
                q.push(i);
            }
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int d = 1;
    test
    {
        for(int i = 0; i < 200005; i++) 
        {
            ke[i].clear();
            level[i] = 0;
            visited[i] = 0;
        }
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            ke[a[i]].push_back(i);
        }
        BFS();
        map<int, int> m;
        int level_max = 1;
        for(int i = 1; i <= n; i++)
        {
            m[level[i]]++;
            level_max = max(level_max, level[i]);
        }
        int idx = 1;
        int cnt_max = m[level[1]];
        for(int i = 1; i <= n; i++)
        {
            if(m[level[i]] > cnt_max)
            {
                idx = level[i];
                cnt_max = m[level[i]];
            }
        }
        int b[level_max + 5] = {};
        if(idx % 2)
        {
            for(int i = 1; i <= level_max; i++)
            {
                if(i % 2) b[i] = 1;
                else b[i] = 2;
            }
        }
        else
        {
            for(int i = 1; i <= level_max; i++)
            {
                if(i % 2) b[i] = 2;
                else b[i] = 1;
            }
        }
        ll sum = 0;
        for(int i = 1; i <= level_max; i++)
        {
            //cout << i << ": " << m[i] << " " << b[i] << endl; 
            sum += b[i] * m[i];
        }
        cout << "Case #" << d++ << ": " << sum;
        cout << endl;
    }
    return 0;
}