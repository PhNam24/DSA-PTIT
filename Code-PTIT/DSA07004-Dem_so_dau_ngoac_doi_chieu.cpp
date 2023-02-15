#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int count(string s)
{
    int cnt = 0;
    stack<char> st;
    if(s[s.size() - 1] == '(')
    {
        s[s.size() - 1] = ')';
        cnt++;
    }   
    for(int i = 0; i < s.size(); i++)
    {
        if(st.empty() && s[i] == ')')
        {
            s[i] = '(';
            cnt++;  
        }
        if(s[i] == '(') st.push(s[i]);
        else st.pop();
    }
    return cnt + st.size() / 2;
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
        cout << count(s);
        cout << endl;
    }
    return 0;
}