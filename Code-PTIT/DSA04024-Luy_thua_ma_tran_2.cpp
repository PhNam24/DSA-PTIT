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
    maTran ans;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ans.mt[i][j] = 0;
            for(int h = 0; h < n; h++)
            {
                ans.mt[i][j] += (a.mt[i][h] * b.mt[h][j]) % mod;
                ans.mt[i][j] %= mod;
            }
        }
    }
    return ans;
}

maTran Pow(maTran n, int k)
{
    if(k == 1) return n;
    maTran tmp = Pow(n, k / 2);
    if(k % 2 == 0) return tmp * tmp;
    return n * tmp * tmp;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        cin >> n >> k;
        maTran a, b;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a.mt[i][j];
            }
        }
        b = Pow(a, k);
        ll ans = 0;
        for(int i = 0; i < n; i++) ans = (ans + b.mt[i][n - 1]) % mod;
        cout << ans;
        cout << endl;
    }
    return 0;
}