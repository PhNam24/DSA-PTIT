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
        int n, k;
        cin >> n >> k;
        int a[n];
        nhap(a);
        int g  = a[0];
        if(a[0] == k) 
        {
            cout << 1 << endl;
            continue;
        }
        int ans = 1e9;
        for(int i = 1; i < n; i++)
        {
            if(g % k) g = a[i];
            g = __gcd(g, a[i]);
            if(g == k)
            {
                int value = a[i], index = i;
                if(a[i] == k)
                {
                    ans = 1;
                    continue;
                }
                while(index < n)
                {
                    
                }
            }
        }
    }
    return 0;
}