#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

using namespace std;

string s;
int n, a[1000000], mark[1000000];

void in()
{
    for ( int i = 1; i <= n; i++ )
    {
        cout << s[a[i] - 1]; 
    }
    cout << " ";
}

void Try(int i)
{
    for ( int j = 1; j <= n ; j++ )
    {
        if ( !mark[j] )
        {
            mark[j] = 1;
            a[i] = j;
            if ( i == n ) in();
            Try(i + 1);
            mark[j] = 0;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        cin >> s;
        n = s.size();
        Try(1);
        cout << endl;
    }
    return 0;
}