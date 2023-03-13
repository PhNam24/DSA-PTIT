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
        stack<char> st;
        int d = 0, cnt = 0;
        for ( int i = 0 ; i < s.size() ; i++ )
        {
            if ( s[i] == '[' )
            {
                st.push(s[i]);
            }
            else 
            {
                if (!st.empty())
                {
                    st.pop(); 
                    cnt++;
                }
            }
        }
        cout << s.size() - 2 * cnt;
        cout << endl;
    }
    return 0;
}