#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int d = 1;
    test
    {
        int n, a[1005], sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if( i * 2 > n - 1 && (i % 2)) sum += a[i];
        }
        cout << "Case " << d++ << ": " << sum << endl; 
    }
    return 0;
}