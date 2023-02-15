#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int cnt[1000005];

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        memset(cnt, 0, 1000005);
        int n;
        cin >> n;
        int a[n];
        int cntMax = -1e9, Max = -1e9;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            Max = max(Max, a[i]);
            cnt[a[i]]++;
            cntMax = max(cntMax, cnt[a[i]]);
        }
        if (cntMax <= n / 2) cout << "NO";
        else
        {
            for(int i = 0; i <= Max; i++)
            {
                if (cnt[i] == cntMax) 
                {
                    cout << i;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}