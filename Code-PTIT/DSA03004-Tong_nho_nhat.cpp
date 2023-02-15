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
        int n;
        cin >> n;
        int a[n];
        nhap(a);
        sort(a, a + n);
        ll sum = 0;
        if(n % 2 == 0)
        {
            int m = n / 2 - 1;
            for(int i = 0; i < n; i += 2)
            {
                sum += (a[i] + a[i + 1]) * pow(10, m--);
            }
        }
        else
        {
            int m = n / 2 - 1;
            sum += a[0] * pow(10, m);
            for(int i = 1; i < n; i += 2)
            {
                sum += (a[i] + a[i + 1]) * pow(10, m--);
            }
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}