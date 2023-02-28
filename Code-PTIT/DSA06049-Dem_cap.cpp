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
        int n, k;
        cin >> n >> k;
        int a[n];
        nhap(a);
        sort(a, a + n);
        ll cnt = 0;
        for(int i = 0; i < n; i++)
        {
            int idx = lower_bound(a + i + 1, a + n, a[i] + k) - a - i - 1;
            cnt += idx;
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}