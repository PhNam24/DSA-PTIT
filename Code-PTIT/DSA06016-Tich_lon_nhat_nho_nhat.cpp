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
        int n, m;
        cin >> n >> m;
        ll Min = 1e9, Max = -1e9;
        ll a[n], b[m];
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            Max = max(a[i], Max);
        }
        for ( int i = 0; i < m; i++ )
        {
            cin >> b[i];
            Min = min(b[i], Min);
        }
        cout << Max * Min;
        cout << endl;
    }
    return 0;
}