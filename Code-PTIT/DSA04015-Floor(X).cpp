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
        ll n, x;
        cin >> n >> x;
        int a[n];
        nhap(a);
        int idx = lower_bound(a, a + n, x) - a;
        if(a[idx] == x) cout << idx + 1;
        else if (idx == 0) cout << -1;
        else cout << idx;
        cout << endl;
    }
    return 0;
}