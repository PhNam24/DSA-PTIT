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
        int a[n];
        nhap(a);
        string ans = "NO";
        sort(a, a + n);
        for(int i = 0; i < n; i++)
        {
            int l = i + 1, r = n - 1, check = 0;
            while(l < r)
            {
                if (a[i] + a[l] + a[r] == k)
                {
                    ans = "YES";
                    check = 1;
                    break;
                }
                else if (a[i] + a[l] + a[r] < k) l++;
                else r--;
            }
            if (check) break;
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}