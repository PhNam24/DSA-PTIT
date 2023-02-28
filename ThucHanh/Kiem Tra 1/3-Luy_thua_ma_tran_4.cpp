#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, k;

struct maTran
{
    ll mt[15][15];
};

maTran operator*(maTran a, maTran b)
{
    maTran c;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c.mt[i][j] = 0;
            for(int k = 0; k < n; k++)
            {
                c.mt[i][j] += a.mt[i][k] % mod * b.mt[k][j] % mod;
                c.mt[i][j] %= mod;
            }
        }
    }
    return c;
}

maTran Pow(maTran a, int k)
{
    if(k == 1) return a;
    maTran tmp = Pow(a, k / 2);
    if(k % 2 == 0) return tmp * tmp;
    return a * tmp * tmp;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int ans = 0;
        cin >> n >> k;
        maTran a;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a.mt[i][j];
            }
        }
        maTran b = Pow(a, k);
        for(int i = 0; i < n; i++)
        {
            ans += b.mt[0][i] % mod;
            ans %= mod; 
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}