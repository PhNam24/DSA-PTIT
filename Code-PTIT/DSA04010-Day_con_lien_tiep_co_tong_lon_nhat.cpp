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
    test
    {
        int n;
        cin >> n;
        int a[n];
        nhap(a);
        int ans = -1e9, sum = 0;    
        for(int i : a)
        {
            sum = max(i, sum + i);
            ans = max(ans, sum);
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}