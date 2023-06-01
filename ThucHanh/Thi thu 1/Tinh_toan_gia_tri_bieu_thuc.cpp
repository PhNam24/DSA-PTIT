#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

ll calcPrefix(vector<string> v)
{
    stack<ll> st;
    for(int i = v.size() - 1; i >= 0; i--)
    {
        if(v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/") st.push(stoll(v[i]));
        else
        {
            if(v[i] == "+")
            {
                ll tmp1 = st.top();
                st.pop();
                ll tmp2 = st.top();
                st.pop();
                st.push(tmp1 + tmp2);
            }
            if(v[i] == "-")
            {
                ll tmp1 = st.top();
                st.pop();
                ll tmp2 = st.top();
                st.pop();
                st.push(tmp1 - tmp2);
            }
            if(v[i] == "*")
            {
                ll tmp1 = st.top();
                st.pop();
                ll tmp2 = st.top();
                st.pop();
                st.push(tmp1 * tmp2);
            }
            if(v[i] == "/")
            {
                ll tmp1 = st.top();
                st.pop();
                ll tmp2 = st.top();
                st.pop();
                st.push(tmp1 / tmp2);
            }
        }
    }
    return st.top();
}

ll calcPostfix(vector<string> v)
{
    stack<ll> st;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/") st.push(stoll(v[i]));
        else
        {
            if(v[i] == "+")
            {
                ll tmp1 = st.top();
                st.pop();
                ll tmp2 = st.top();
                st.pop();
                st.push(tmp2 + tmp1);
            }
            if(v[i] == "-")
            {
                ll tmp1 = st.top();
                st.pop();
                ll tmp2 = st.top();
                st.pop();
                st.push(tmp2 - tmp1);
            }
            if(v[i] == "*")
            {
                ll tmp1 = st.top();
                st.pop();
                ll tmp2 = st.top();
                st.pop();
                st.push(tmp2 * tmp1);
            }
            if(v[i] == "/")
            {
                ll tmp1 = st.top();
                st.pop();
                ll tmp2 = st.top();
                st.pop();
                st.push(tmp2 / tmp1);
            }
        }
    }
    return st.top();
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }
        if(v[v.size() - 1] != "+" && v[v.size() - 1] != "-" && v[v.size() - 1] != "*" && v[v.size() - 1] != "/") cout << calcPrefix(v);
        else cout << calcPostfix(v);
        cout << endl;
    }
    return 0;
}