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
    string s1, s2;
    char dau;
    map<pair<string, string>, int> m;
    string ans = "possible";
    int cnt = 0;
    test
    {
        cin >> s1 >> dau >> s2;
        if(dau == '>') 
        {
            m[{s1, s2}] = 1;
        }
        else
        {
            m[{s1, s2}] = 0;
        }
    }
    cout << ans;
    return 0;
}