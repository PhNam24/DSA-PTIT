#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        nhap(a);
        int dp[s + 5] = {};
        dp[0] = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = s; j >= a[i]; j--)
            {
                if(dp[j - a[i]] == 1) dp[j] = 1; 
            }
        }
        if(dp[s]) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}