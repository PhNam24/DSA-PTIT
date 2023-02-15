#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int check(string s)
{
    stack<char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i]) || s[i] == ' ') continue;
        if(s[i] == ')')
        {
            if(st.top() == '(') return 1;
            else 
            {
                while (!st.empty() && st.top() != '(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
        else st.push(s[i]);
    }
    return 0;
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
        if(check(s)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}