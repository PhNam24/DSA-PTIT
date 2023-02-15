#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n, s, m;
        cin >> n >> s >> m;
        if (n < m || 6 * (n - m) < m) cout << - 1;
        else
        {
           cout << ceil((double)s * m / n);
        }
        cout << endl;
    }
    return 0;
}