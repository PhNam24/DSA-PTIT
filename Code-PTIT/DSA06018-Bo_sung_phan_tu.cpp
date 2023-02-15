#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        int l = 1e9, r = -1e9, m = n, a[n], d[100000] = {};
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            d[a[i]]++;
            if ( d[a[i]] > 1 ) m--;
            l = min(l, a[i]);
            r = max(r, a[i]);
        }
        cout << r - l + 1 - m;
        cout << endl;   
    }
    return 0;
}