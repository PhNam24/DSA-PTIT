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
    int n;
    cin >> n;
    int a[n];
    nhap(a);
    sort(a, a + n);
    cout << max({a[0] * a[1], a[n-1] * a[n-2], a[0] * a[1] * a[n-1], a[n-1] * a[n-2] * a[n-3]});
    return 0;
}