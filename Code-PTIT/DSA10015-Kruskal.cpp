#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int root[105], Size[105];
vector<pair<int, pair<int, int>>> canh;

void makeSet()
{
    for(int i = 0; i < 105; i++)
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
        makeSet();
        canh.clear();
        int n, m;
        cin >> n >> m;
        while(m--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            canh.push_back({z, {x, y}});
        }
        int ans = 0;
        sort(canh.begin(), canh.end());
        for(auto i : canh)
        {
            if(Union(i.second.second, i.second.first))
            {
                ans += i.first;
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}