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
        tang[0] = 1;
        giam[n - 1] = 1;
        for(int i = 1; i < n; i++)
        {
            if(a[i] > a[i - 1]) tang[i] = tang[i - 1] + 1;
            else tang[i] = 1;
        }
        for(int i = n - 2; i >= 0; i--)
        {
            if(a[i] > a[i + 1]) giam[i] = giam[i + 1] + 1;
            else giam[i] = 1;
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans = max(ans, tang[i] + giam[i] - 1);
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}