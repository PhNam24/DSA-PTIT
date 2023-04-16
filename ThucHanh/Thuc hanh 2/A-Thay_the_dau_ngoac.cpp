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
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != '(' && s[i] != ')') continue;
            if(s[i] == '(')
            {
                st.push(i);
            }
            else 
            {
                if(st.empty()) s[i] = '2';
                else
                {
                    s[st.top()] = '0';
                    s[i] = '1';
                    st.pop();
                }
            }
        }
        while(st.size())
        {
            s[st.top()] = '2';
            st.pop();
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '2') cout << -1;
            else cout << s[i];
        }
        cout << endl;
    }
    return 0;
}