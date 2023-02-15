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
        int ans = 1e9;
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            ans = min(ans, abs(a[i] - a[i - 1]));
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}