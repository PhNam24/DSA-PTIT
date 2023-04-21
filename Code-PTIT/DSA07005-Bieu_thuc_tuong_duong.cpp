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
        s = '+' + s;
        stack<char> st, st1;
        st1.push('+');
        for(int i = 0; i < s.size(); i++)
        {
            if(isalpha(s[i])) st.push(s[i]);
            else 
            {   if(s[i] == '+' || s[i] == '-')
                {
                    if(st1.top() == '+') st.push(s[i]);
                    else if(st1.top() == '-') 
                    {
                        if(s[i] == '+') st.push('-');
                        else st.push('+');
                    }
                }
                if(s[i] == '(') st1.push(st.top());
                else if(s[i] == ')') st1.pop();
            }
        }
        string ans;
        while(st.size() > 1) 
        {
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}