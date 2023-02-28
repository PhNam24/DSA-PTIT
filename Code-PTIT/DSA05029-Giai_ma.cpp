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
        string s;
        cin >> s;
        if(s[0] == '0') 
        {
            cout << 0;
            cout << endl;
            continue;
        }
        int dp[45] = {};
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= s.size(); ++i)
        {
            if(s[i - 1] > '0') dp[i] = dp[i - 1];
            if(s[i - 2] == '1' or (s[i - 2] == '2' && s[i - 1] < '7')) dp[i] += dp[i - 2];
        }
        cout << dp[s.size()];
        cout << endl;
    }
    return 0;
}