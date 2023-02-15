#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

string check(string s)
{
    stack<char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' ||  s[i] == '{' || s[i] == '[') st.push(s[i]);
        else
        {
            if(st.empty()) return "NO";
            else
            {
                if(s[i] == ')') if(st.top() != '(') return "NO";
                if(s[i] == ']') if(st.top() != '[') return "NO";
                if(s[i] == '}') if(st.top() != '{') return "NO";
                st.pop();
            }
        } 
    }
    if(st.empty()) return "YES";
    return "NO";
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        cout << check(s);
        cout << endl;
    }
    return 0;
}   