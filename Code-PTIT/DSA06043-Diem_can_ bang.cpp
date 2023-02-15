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
        int n;
        cin >> n;
        int a[n], sum[n];
        nhap(a);
        sum[0] = a[0];
        for(int i = 1; i < n; i++)
        {
            sum[i] = a[i] + sum[i-1];
        }
        int idx = -1;
        for(int i = 0; i < n; i++)
        {
            if (sum[i - 1] == sum[n - 1] - sum[i]) 
            {
                idx = i;
                break;
            }
        }
        if (idx >= 0) cout << idx + 1;
        else cout << idx;
        cout << endl;
    }
    return 0;
}