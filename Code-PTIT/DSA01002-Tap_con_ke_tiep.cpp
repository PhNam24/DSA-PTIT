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
        int n, k;
        cin >> n >> k;
        int a[k + 5];
        for ( int i = 1; i <= k; i++ ) cin >> a[i];
        int idx = k;
        while(idx > 0 && a[idx] == n - k + idx) idx--;
        if (idx > 0)
        {
            a[idx] = a[idx] + 1;
            for ( int i = idx + 1; i <= k; i++ )
            {
                a[i] = a[idx] - idx + i;
            }
            for ( int i = 1; i <= k; i++) cout << a[i] << " ";
        }
        else for ( int i = 1; i <= k; i++ ) cout << i << " ";
        cout << endl;
    }
    return 0;
}   