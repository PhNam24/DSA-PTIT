#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

ll Pow(ll n, ll k)
{
    if(k == 1) return n;
    if(k == 0) return 1;
    ll tmp = Pow(n, k / 2) % mod;
    tmp = (tmp * tmp) % mod;
    if(k % 2 == 0) return tmp % mod;
    return (n * tmp) % mod;
}

ll Reverse(ll n)
{
    string tmp = to_string(n);
    reverse(tmp.begin(), tmp.end());
    return stoll(tmp);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        ll n, r;
        cin >> n;
        r = Reverse(n);
        cout << Pow(n, r);
        cout << endl;
    }
    return 0;
}