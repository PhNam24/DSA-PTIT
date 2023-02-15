#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int sol(string s)
{
    int res = -1;
    stack<int> st;
    st.push(-1);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(') st.push(i);
        else
        {
            st.pop();
            if(!st.empty()) res = max(res, i - st.top());
            else st.push(i);
        }
    }
    return res;
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
        cout << sol(s);
        cout << endl;
    }
    return 0;
}