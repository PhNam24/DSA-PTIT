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
    int d = 1;
    test
    {
        int n, ans = -1e9;
        cin >> n;
        int a[n];
        nhap(a);
        int khongAm = 0;
        for(int i : a)
        {
            if(i >= 0) khongAm++;
            else break;
        }
        if(khongAm == n)
        {
            ans = 0;
            for(int i : a) ans += i;
        }
        else
        {
            int sum[n];
            sum[0] = a[0];
            for(int i = 1; i < n; i++)
            {
                sum[i] = sum[i - 1] + a[i];
            }
            for(int i = 0; i < n; i++)
            {
                ans = max(ans, (sum[i] - sum[n - 1] + sum[i]));
            }
        }
        cout << "Case " << d++ << ": " << ans << endl;
    }
    return 0;
}