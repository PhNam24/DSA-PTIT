#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n, m;
        cin >> n >> m;
        vector<int> ke[n + 5];
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        for(int i = 1; i <= n; i++)
        {
            cout << i << ": ";
            for(auto j : ke[i]) cout << j << " ";
            cout << endl;
        }
    }
    return 0;
}