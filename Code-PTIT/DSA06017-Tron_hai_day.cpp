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
        int a[n], b[m];
        multiset<int> s;
        for (int i = 0; i < n; i++ )
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (int i = 0; i < m; i++ )
        {
            cin >> b[i];
            s.insert(b[i]);
        }
        for (int i : s ) cout << i << " ";
        cout << endl;
    }
    return 0;
}