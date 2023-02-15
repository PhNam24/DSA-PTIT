#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n, k;
        cin >> n >> k;
        int c[n + 5][n + 5] = {};
        for(int i = 0; i <= n; i++)
        {
            c[i][0] = 1;
            c[i][i] = 1;
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j < i; j++)
            {
                c[i][j] = ((c[i - 1][j - 1] + c[i - 1][j]) % mod) % mod;
            }
        }
        cout << c[n][k];
        cout << endl;
    }
    return 0;
}