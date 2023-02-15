#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, check = 1, a[20][20];
string s;

void Try(int i, int j)
{
    if(i == n && j == n)
    {
        cout << s << " ";
        check = 0;
        return;
    }
    if(a[i + 1][j])
    {
        s += 'D';
        Try(i + 1, j);
        s.pop_back();
    }
    if(a[i][j + 1])
    {
        s += 'R';
        Try(i , j + 1);
        s.pop_back();
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        check = 1;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        if (!a[1][1] || !a[n][n]) cout << -1;
        else
        {
            Try(1, 1);
            if(check) cout << -1;
        }
        cout << endl;
    }
    return 0;
}