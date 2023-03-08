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
        int n;
        cin >> n;
        int a[n];
        nhap(a);
        int tang[n], giam[n];
        int ans = -1e9;
        for(int i = 0; i < n; i++)
        {
            tang[i] = a[i];
            for(int j = 0; j < i; j++)
            {
                if(a[i] > a[j]) tang[i] = max(tang[i], tang[j] + a[i]);
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            giam[i] = a[i];
            for(int j = n - 1; j > i; j--)
            {
                if(a[i] > a[j]) giam[i] = max(giam[i], giam[j] + a[i]);
            }
        }
        for(int i = 0; i < n; i++)
        {
            ans = max(ans, tang[i] + giam[i] - a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}