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
        int a[n], b[n];
        nhap(a);
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        sort(a, a + n);
        int l = 0, r = n - 1;
        while(a[l] == b[l]) l++;
        while(a[r] == b[r]) r--;
        cout << l + 1 << " " << r + 1;
        cout << endl;
    }
    return 0;
}