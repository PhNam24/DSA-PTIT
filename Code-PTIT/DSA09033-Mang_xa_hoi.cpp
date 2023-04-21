#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, m;
vector<int> ke[100005];

string solve()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j : ke[i])
        {
            if(ke[i].size() != ke[j].size()) return "NO";
        }
    }
    return "YES";
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        for(int i = 0; i < 100005; i++) ke[i].clear();
        cin >> n >> m;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        cout << solve();
        cout << endl;
    }
    return 0;
}