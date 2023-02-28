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
        for(int i = 1; i < s.size(); i++)
        {
            if(ans[i] == ans[i - 1]) s[i] = '0';
            else s[i] = '1';
        }
        cout << s;
        cout << endl;
    }
    return 0;
}