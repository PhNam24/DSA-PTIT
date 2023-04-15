#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

vector<pair<int, int>> canh;
int root[1005], Size[1005];

void MakeSet()
{
    for(int i = 0; i < 1005; i++)
    {
        root[i] = i;
        Size[i] = 1;
    }
}

int findRoot(int u)
{
    if(u == root[u]) return u;
    return u = findRoot(root[u]);
}

int Union(int x, int y)
{
    int rX = findRoot(x), rY = findRoot(y);
    if(rX != rY)
    {
        if(rX < rY) swap(rX, rY);
        root[rY] = rX;
        Size[rX] += Size[rY];
        return 1;
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
        MakeSet();
        canh.clear();
        int n, m;
        cin >> n >> m;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            canh.push_back({x, y});
        }
        int check = 0;
        for(auto i : canh)
        {
            if(!Union(i.first, i.second)) 
            {
                check = 1;
                break;
            }
        }
        if(check) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}