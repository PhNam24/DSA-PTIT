#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, a[100], mark[100];

int check()
{
    for(int i = 1; i < n; i++)
    {
        if(abs(a[i] - a[i + 1]) == 1) return 0;
    }
    return 1;
}

void in()
{
    if(check())
    {
        for(int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if (!mark[j])
        {
            mark[j] = 1;
            a[i] = j;
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
    test
    {
        cin >> n;
        Try(1);
    }
    return 0;
}