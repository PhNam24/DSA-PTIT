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
        int n, m, cnt = 0;
        cin >> n >> m;
        int a[n], b[m], d[10] = {};
        nhap(a);
        for(int &i : b)
        {
            cin >> i;
            if(i < 5) d[i]++;
        }
        sort(b, b + n);
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0) continue;
            else if(a[i] == 1) cnt += d[0];
            else if(a[i] == 2) cnt += m - d[2] - d[3] - d[4];
            else if(a[i] == 3) cnt += m - d[3];
            else if(a[i] == 4) cnt += m - d[2] - d[3] - d[4];
            else
            {
                int idx = upper_bound(b, b + n, a[i]) - b;
                if(idx != m) cnt += m - idx;
                cnt += d[0] + d[1];
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}