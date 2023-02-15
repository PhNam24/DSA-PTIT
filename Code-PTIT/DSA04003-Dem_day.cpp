#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

ll mod = 123456789;

ll sol(ll n)
{
    if(n == 0) return 1;
    ll tmp = sol(n / 2);
    if(n % 2 == 0) return (tmp * tmp) % mod;
    return ((2 * tmp) % mod * tmp) % mod;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        ll n;
        cin >> n;
        cout << sol(n - 1);
        cout << endl;
    }
    return 0;
}