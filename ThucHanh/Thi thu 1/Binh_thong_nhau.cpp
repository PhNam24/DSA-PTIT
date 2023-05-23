#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int root[100005], Size[100005];

void makeSet()
{
    for(int i = 0; i < 100005; i++)
    {
        root[i] = i;
        Size[i] = 1;
    }
}

int findRoot(int u)
{
    if(root[u] == u) return u;
    return u = findRoot(root[u]);
}

void Union(int x, int y)
{
    x = findRoot(x);
    y = findRoot(y);
    if(x != y)
    {
        if(x < y) swap(x, y);
        root[y] = x;
        Size[x] += Size[y];
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    makeSet();
    test
    {
        int x, y, z;
        cin >> x >> y >> z;
        if(z == 1) Union(x, y); 
        else cout << (findRoot(x) == findRoot(y)) << endl;
    }
    return 0;
}