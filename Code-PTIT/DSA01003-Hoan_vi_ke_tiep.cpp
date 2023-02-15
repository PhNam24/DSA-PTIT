#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

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
        int a[n + 5];
        for ( int i = 1; i <= n; i++ ) cin >> a[i];
        int idx = n - 1;
        while(idx > 0 && a[idx] < a[idx - 1]) idx--;
        if ( idx < 0 ) for ( int i = 1 ; i <= n; i++ ) cout << i << " ";
        else
        {
            int tmp = n;
            while(a[tmp] < a[idx]) tmp--;
            swap(a[tmp], a[idx]);
            int r = n, l = idx + 1;
            while(l < r)
            {
                swap(a[l], a[r]);
                l++;
                r--;
            }
            for ( int i = 1; i <= n; i++ ) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}