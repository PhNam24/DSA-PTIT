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
        int n, k;
        cin >> n >> k;
        int a[n];
        nhap(a);
        sort(a, a + n);
        int idx = min(k, n - k);
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(i < idx) sum -= a[i];
            else sum += a[i];
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}