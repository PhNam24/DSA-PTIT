#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, a[15];

void Try(int i, int s)
{
    for(int j = n; j > 0; j--)
    {
        a[i] = j;
        if(j == s) 
        {
            for(int k = 0; k <= i; k++) cout << a[k] << " ";
            cout << endl;
        }
        else if(j < s) Try(i + 1, s - j);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        memset(a, 15, 0);
        cin >> n;
        Try(0, n);
        cout << endl;
    }
    return 0;
}