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
        int n;
        cin >> n;
        int a[n], b[n];
        nhap(a);
        nhap(b);
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        ll ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += a[i] * b[i];
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}   