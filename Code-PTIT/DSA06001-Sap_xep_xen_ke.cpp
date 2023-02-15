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
        int a[n];
        nhap(a);
        sort(a, a + n, greater<int>());
        int l = 0, r = n - 1;
        while(l < r)
        {
            cout << a[l++] << " " << a[r--] << " ";
        }
        if ( n % 2 != 0 ) cout << a[n / 2];
        cout << endl;
    }
    return 0;
}