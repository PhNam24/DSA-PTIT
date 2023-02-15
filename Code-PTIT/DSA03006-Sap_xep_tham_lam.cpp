#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int check(int a[], int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] + a[n - 1 - i] != b[i] + b[n - 1 - i]) return 0;
    }
    return 1;
}

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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        if(check(a, b, n)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}