#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

using namespace std;

int n;
int a[10000];

int check (int a[])
{
    for ( int i = 0; i < n; i++ )
    {
        if ( a[i] != a[n - 1 - i] ) return 0;
    }
    return 1;
}

void in()
{
    for ( int i = 0; i < n; i++ )
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try (int i)
{
    for ( int j = 0; j < 2; j++ )
    {
            a[i] = j;
            if ( i == n - 1 ) 
            {
                if ( check(a) ) in();
            }
            else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    Try(0);
    return 0;
}