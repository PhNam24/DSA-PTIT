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
        int n, k;
        cin >> n >> k;
        if(k > n) cout << 0;
        else if(k == 0) cout << 1;
        else
        {
            ll ans = 1;
            for(int i = n; i >= n - k + 1; i--)
            {
                (ans *= i) %= mod;
            }
            cout << ans;
        } 
        cout << endl;
    }
    return 0;
}