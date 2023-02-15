#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n;
char a[20], alpha[2] = {'A', 'H'};

int check()
{
    if ( a[1] != 'H' || a[n] != 'A' ) return 0;
    for ( int i = 1; i < n; i++ )
    {
        if ( a[i] == 'H' && a[i + 1] == 'H' ) return 0;
    }
    return 1;
}

void in()
{
    for ( int i = 1; i <= n; i++ )
    {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i)
{
    for ( int j = 0; j < 2; j++ )
    {
        a[i] = alpha[j];
        if (i == n) 
        {
            if (check()) in();
        }
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
    }
    return 0;
}