#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

string convert(string s1)
{
    stack<char> st, st1;
    s1 = '+' + s1;
    st1.push('+');
    for(int i = 0; i < s1.size(); i++)
    {
        if(isalpha(s1[i])) st.push(s1[i]);
        else 
        {
            if(s1[i] == '+' || s1[i] == '-')
            {
                if(st1.top() == '+') st.push(s1[i]);
                else 
                {
                    if(s1[i] == '+') st.push('-');
                    else st.push('+');
                }
            }
            if(s1[i] == '(') st1.push(st.top());
            else if(s1[i] == ')') st1.pop();
        }
    }
    string res;
    while(st.size() > 1)
    {
        res = st.top() + res;
        st.pop();
    }
    string ans;
    for(int i = 0; i < res.size(); i++)
    {
        if(!isalpha(res[i]) && !isalpha(res[i + 1])) continue;
        ans.push_back(res[i]);
    }
    return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s1, s2;
        cin >> s1 >> s2;
        s1 = convert(s1);
        s2 = convert(s2);
        if(s1 == s2) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}