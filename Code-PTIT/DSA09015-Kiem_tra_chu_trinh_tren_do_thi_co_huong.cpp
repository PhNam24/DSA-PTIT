#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int visited[1005];
vector<int> ke[1005];

void Set()
{
    for(int i = 0; i < 1005; i++) visited[i] = 0;
}

int bfsch ( int x , vector<int> a[1005])
{
    int check[1005] = {};
    int parent[1005] = {};
    queue<int> q;
    q.push(x);
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        check[tmp] = 1;
        for ( int i : a[tmp] )
        {
            if ( check[i] == 0 )
            {
                q.push(i);
                check[i] = 1;
                parent[i] = tmp;
            }
            else if ( i == x ) return 1;
        }
    }
    return 0;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        for(int i = 0; i < 1005; i++) ke[i].clear();
        int n, m;
        cin >> n >> m;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
        }
        int check = 0;
        for(int i = 1; i <= n; i++)
        {
            if(bfsch(i, ke))
            {
                check = 1;
                break;
            }
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}