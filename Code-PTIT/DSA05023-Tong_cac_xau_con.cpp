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
        s += '.';
        ll ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            ll tmp = 0;
            for(int j = i; j < s.size(); j++)
            {
                if(isdigit(s[j]))
                {
                    tmp = tmp * 10 + (s[j] - '0');
                    ans += tmp;
                }
                else break;
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}