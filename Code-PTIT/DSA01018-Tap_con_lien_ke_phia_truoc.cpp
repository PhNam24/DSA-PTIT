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
        int n, k, a[1005] = {};
        cin >> n >> k;
        for(int i = 1; i <= k; i++) cin >> a[i];
        int idx = k;
        while(a[idx - 1] + 1 == a[idx] && idx) idx--;
        if(idx)
        {
            a[idx]--;
            for(int i = idx + 1; i <= k; i++) a[i] = n - k + i;
            for(int i = 1; i <= k; i++) cout << a[i] << " ";
        }
        else for(int i = n - k + 1; i <= n; i++) cout << i << " ";
        cout << endl;
    }
    return 0;
}