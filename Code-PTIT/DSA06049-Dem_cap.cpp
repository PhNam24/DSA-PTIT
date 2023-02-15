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
        int cnt = 0, idx;
        for(int i = 0; i < n; i++)
        {
           if (upper_bound(a,a + n, k + a[i])) 
           {
                idx = upper_bound(a,a + n, k + a[i]) - a;
                cnt += n - idx;
           }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}