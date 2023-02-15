#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        vector<int> v;
        int n, m, k, x;
        cin >> n >> m >> k;
        for(int i = 0; i < n + m; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << v[k - 1];
        cout << endl;
    }
    return 0;
}