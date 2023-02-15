#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

using namespace std;

int n, k, cnt = 0;
int a[1000000], mark[1000000];

int check (int a[])
{
    int sum = 0;
    for ( int i = 0; i < n; i++ )
    {
        if ( mark[i] ) sum += a[i];
    }
    if ( sum != k ) return 0;
    return 1;
}

void in()
{
    for ( int i = 0; i < n; i++ )
    {
        if (mark[i]) cout << a[i] << " ";
    }
    cout << endl;
}

void Try (int i)
{
    for ( int j = 0; j < 2; j++ )
    {
            mark[i] = j;
            if ( i == n - 1 ) 
            {
                if ( check(a) ) 
                {
                    in();
                    cnt++;
                }
            }
            else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for ( int i = 0; i < n; i++ )
    {
        cin >> a[i];
    }
    Try(0);
    cout << cnt;
    return 0;
}