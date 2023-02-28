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
        string ans = s;
        ans[0] = s[0];
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                if(ans[i - 1] == '0') ans[i] = '1';
                else ans[i] = '0';
            }
            else ans[i] = ans[i - 1];
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}