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
    ll f[45] = {};
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i <= 40; i++)
    {
        f[i] = f[i - 2] + f[i - 1];
    }
    int n, k, cnt = 0;
    cin >> n >> k;
    while(f[n] > 1)
    {
        if(k > f[n - 2])
        {
            k -= f[n - 2];
            cnt += f[n - 3];
            n--;
        }
        else n -= 2;
    }
    if(n == 2 && k == 1) cout << cnt + 1;
    else cout << cnt;
    return 0;
}