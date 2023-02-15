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
        set<int> Union, d1, d2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            Union.insert(a[i]);
            d1.insert(a[i]);
        }
         for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            Union.insert(b[i]);
            d2.insert(b[i]);
        }
        for (int i : Union) cout << i << " ";
        cout << endl;
        for (int i : d1)
        {
            if ( d2.find(i) != d2.end() ) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}