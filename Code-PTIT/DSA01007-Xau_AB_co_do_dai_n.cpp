#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

using namespace std;

int n;
char a[1000000];

void in()
{
    for ( int i = 1; i <= n; i++ )
    {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i)
{
    for ( char j = 'A'; j < 'C' ; j++ )
    {
        a[i] = j;
        if ( i == n ) in();
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
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}