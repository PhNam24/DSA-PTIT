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
        ll k;
        cin >> n >> k;
        int a[n];
        nhap(a);
        map<ll, int> m;
        ll sum = 0;
        int check = 1;
        for(int i = 0; i < n; i++)
        {
            sum += a[i];
            if(m[k] || m[sum - k])
            {
                check = 0;
                break;
            }
            m[sum]++;
        }
        if(check) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}