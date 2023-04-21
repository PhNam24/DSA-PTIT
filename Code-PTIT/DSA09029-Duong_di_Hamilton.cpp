#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, m, check, visited[100];
vector<int> ke[100];

void Hamilton(int u, int cnt)
{
    if(cnt == n)
    {
        check = 1;
        return;
    }
    if(check) return;
    for(int i : ke[u])
    {
        if(!visited[i])
        {
            visited[i] = 1;
            Hamilton(i, cnt + 1);
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
        check = 0;
        for(int i = 0; i < 100; i++)
        {
            visited[i] = 0;
            ke[i].clear();
        }
        cin >> n >> m;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            for(int i = 0; i < 100; i++)
            {
                visited[i] = 0;
            }
            visited[i] = 1;
            Hamilton(i, 1);
        }
        cout << check;
        cout << endl;
    }
    return 0;
}