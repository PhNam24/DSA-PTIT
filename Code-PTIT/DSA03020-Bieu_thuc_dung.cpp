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
        stack<int> st;
        int d = 0, cnt = 0;
        for ( int i = 0 ; i < s.size() ; i++ )
        {
            if ( s[i] == '[' )
            {
                st.push(i);
            }
            else 
            {
                if (!st.empty())
                {
                    st.pop(); 
                }
                else
                {
                    int tmp = i;
                    while(s[tmp] == ']') tmp++;
                    swap(s[tmp], s[i]);
                    cnt += tmp - i;
                    st.push(i);
                }
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}