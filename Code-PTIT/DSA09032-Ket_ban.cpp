#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int root[100005], Size[100005];

void MakeSet()
{
	for(int i = 0; i < 100005; i++)
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

void Union(int x, int y)
{
	int rX = findRoot(x), rY = findRoot(y);
	if(rX != rY)
	{
		if(rX < rY) swap(rX, rY);
		root[rY] = rX;
		Size[rX] += Size[rY];
	}
}


int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
	{
		MakeSet();
		int n, m;
		cin >> n >> m;
		int x, y;
		while(m--)
		{
			cin >> x >> y;
			Union(x, y);
		}
		int ans = 0;
		for(int i = 1; i <= n; i++)
		{
			ans = max(ans, Size[i]);
		}
		cout << ans;
		cout << endl;
	}
    return 0;
}