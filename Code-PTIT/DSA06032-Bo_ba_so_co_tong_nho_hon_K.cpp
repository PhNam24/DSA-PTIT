#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        nhap(a);
        sort(a, a + n);
        ll cnt = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int idx = upper_bound(a + j + 1, a + n, k - a[i] - a[j] - 1) - a;
                if(idx > j) cnt += idx - j - 1;
                else break;
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}