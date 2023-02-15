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
        int n, x;
        cin >> n >> x;
        int a[n];
        int idx = -1;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == x) idx = i;
        }
        cout << idx + 1;
        cout << endl;
    }
    return 0;
}