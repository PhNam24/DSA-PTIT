#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

void sol(ll p, ll q)
{
    ll x = 0;
    while(1)
    {
        if(q % p == 0)
        {
            cout << "1/" << q / p;
            return;
        }
        x = q / p + 1;
        cout << "1/" << x << " + ";
        p = x * p - q;
        q *= x;
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        ll tu, mau;
        cin >> tu >> mau;
        sol(tu, mau);
        cout << endl;
    }
    return 0;
}