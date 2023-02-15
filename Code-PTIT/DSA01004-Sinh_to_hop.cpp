#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

using namespace std;

int n, k, a[1000000];

void in()
{
    for ( int i = 1; i <= k; i++ )
    {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i)
{
    for ( int j = a[i - 1] + 1; j <= n - k + i; j++ )
    {
        a[i] = j;
        if ( i == k ) in();
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
    return 0;
}