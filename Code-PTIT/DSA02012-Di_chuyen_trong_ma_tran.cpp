#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, m, cnt = 0, a[20][20];

void Try(int i, int j)
{
    if(i == n && j == m)
    {
        cnt++;
        return;
    }
    if(i < n)
    {
        Try(i + 1, j);
    }
    if(j < m)
    {
        Try(i , j + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        cnt = 0;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        Try(1, 1);
        cout << cnt;    
        cout << endl;
    }
    return 0;
}   