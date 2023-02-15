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
        int n, k;
        cin >> n >> k;
        int a[k + 5], b[k + 5];
        set<int> s1, s2;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            s1.insert(a[i]);
        }
        int idx = k;
        while(idx > 0 && a[idx] == n - k + idx) idx--;
        if (idx > 0)
        {
            b[idx] = b[idx] + 1;
            for (int i = idx + 1; i <= k; i++)
            {
                b[i] = b[idx] + i - idx;
            }
        }
        else
        {
            cout << k << endl;
            continue;
        }
        for (int i = 1; i <= k; i++)
        {
            s2.insert(b[i]);
        }
        int cnt = 0;
        for (int i : s1)
        {
            if (s2.find(i) == s2.end()) cnt++;
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}