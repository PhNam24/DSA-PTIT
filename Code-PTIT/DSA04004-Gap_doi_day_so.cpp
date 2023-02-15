#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

ll findK(ll k)
{
    int cnt = 1;
    while(k % 2 == 0)
    {
        k /= 2;
        cnt++;
    }
    return cnt;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        ll n, k;
        cin >> n >> k;
        cout << findK(k);
        cout << endl;
    }
    return 0;
}