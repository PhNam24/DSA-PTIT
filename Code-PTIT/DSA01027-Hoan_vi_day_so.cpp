#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, a[100000], b[100000], mark[100000];

void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if ( !mark[j] )
        {
            mark[j] = 1;
            b[i] = j;
            if (i == n) in();
            else Try(i + 1);
            mark[j] = 0;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    Try(1);
    return 0;
}   