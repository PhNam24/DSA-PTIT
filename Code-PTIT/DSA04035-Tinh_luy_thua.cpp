#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

ll Pow(ll n, ll k)
{
    if(k == 0) return 1;
    if(k == 1) return n;
    ll tmp = Pow(n, k / 2);
    if(k % 2 == 0) return (tmp * tmp) % mod;
    return ((n* tmp) % mod * tmp) %mod;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    ll a, b;
    while(1)
    {
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        cout << Pow(a, b);
        cout << endl;
    }
    return 0;
}