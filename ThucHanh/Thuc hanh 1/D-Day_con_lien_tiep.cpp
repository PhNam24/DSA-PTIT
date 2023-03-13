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
    int n;
    cin >> n;
    ll a[n];
    ll Max = -1e10;
    for(ll &i : a)
    {
        cin >> i;
        Max = max(Max, i); 
    }
    ll cnt[n] = {}, ans = 1;
    if(a[0] == Max) cnt[0] = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] == Max) cnt[i] = cnt[i - 1] + 1;
        else cnt[i] = 0;
        ans = max(ans, cnt[i]);
    }
    cout << ans;
    return 0;
}