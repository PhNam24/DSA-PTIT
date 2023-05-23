#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int calcPrefix(string s)
{
    stack<int> st;
    vector<string> v;
    stringstream ss(s);
    while(ss >> s)
    {
        v.push_back(s);
    }
    for(int i = v.size() - 1; i >= 0; i--)
    {
        if(v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/") st.push(stoll(v[i]));
        else
        {
            if(v[i] == "+")
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp1 + tmp2);
            }
            if(v[i] == "-")
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp1 - tmp2);
            }
            if(v[i] == "*")
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp1 * tmp2);
            }
            if(v[i] == "/")
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp1 / tmp2);
            }
        }
    }
    return st.top();
}

int calcPostfix(string s)
{
    stack<int> st;
    vector<string> v;
    stringstream ss(s);
    while(ss >> s)
    {
        v.push_back(s);
    }
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/") st.push(stoll(v[i]));
        else
        {
            if(v[i] == "+")
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp2 + tmp1);
            }
            if(v[i] == "-")
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp2 - tmp1);
            }
            if(v[i] == "*")
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
                st.pop();
                st.push(tmp2 * tmp1);
            }
            if(v[i] == "/")
            {
                int tmp1 = st.top();
                st.pop();
                int tmp2 = st.top();
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
        cin.ignore();
        string s;
        getline(cin, s);
        if(isdigit(s[s.size() - 1])) cout << calcPrefix(s);
        else cout << calcPostfix(s);
        cout << endl;
    }
    return 0;
}