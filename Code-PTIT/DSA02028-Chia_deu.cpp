#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, k, a[15], sum[15];
int avg, ans = 0;

void Try(int i, int cnt = 0)
{
    if(cnt == k)
    {
        ans += (i == n);
        return;
    }
    for(int j = i + 1; j <= n; j++)
    {
        if(sum[j] - sum[i] == avg)
        {
            Try(j, cnt + 1);
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sum[1] = a[1];
    for(int i = 2; i <= n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }
    if(sum[n] % k)
    {
        cout << 0;
        return 0;
    }
    avg = sum[n] / k;
    Try(0);
    cout << ans;
    return 0;
}