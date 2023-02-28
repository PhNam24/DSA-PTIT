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
        int a[n];
        nhap(a);
        int b[n];
        b[n - 1] = a[n - 1];
        for(int i = n - 2; i >= 0; i--)
        {
            b[i] = max(b[i + 1], a[i]);
        }
        int ans = -1;
        int idxa = 0, idxb = 0;
        while(idxa < n && idxb < n)
        {
            if(b[idxb] > a[idxa])
            {
                ans = max(ans, idxb - idxa);
                idxb++;
            }
            else idxa++;
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}