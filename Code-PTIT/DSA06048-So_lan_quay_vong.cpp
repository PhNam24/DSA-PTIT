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
        ll a[n], Min = 1e18, idx = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(Min > a[i])
            {
                Min = a[i];
                idx = i;
            }
        }
        cout << idx;
        cout << endl;
    }
    return 0;
}