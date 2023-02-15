#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        int idx = s.size() - 1;
        while(s[idx] == '0')
        {
            s[idx] = '1';
            idx--;
        }
        if ( idx >= 0 ) s[idx] = '0';
        cout << s;
        cout << endl;
    }
    return 0;
}