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
    int a[n + 5];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int tang[n + 5] = {};
    int Max = 1;
    for(int i = 1; i <= n; i++)
    {
        tang[a[i]] = tang[a[i] - 1] + 1;
        Max = max(Max, tang[a[i]]);
    }
    cout << n - Max;
    return 0;
}