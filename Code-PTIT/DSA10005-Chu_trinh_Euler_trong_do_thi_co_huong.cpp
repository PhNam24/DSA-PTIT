#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int v, e, cnt[1005];
vector<int> ke[1005];

int sol()
{
    for(int i = 1; i <= v; i++)
    {
        if(cnt[i] != ke[i].size()) return 0;
    }
    return 1;
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
            cnt[i] = 0;
            ke[i].clear();
        }
        cin >> v >> e;
        int x, y;
        while(e--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            cnt[y]++;
        }
        cout << sol();
        cout << endl;
    }
    return 0;
}