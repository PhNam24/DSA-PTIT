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
        stack<string> st;
        for(int i = 0; i < s.size(); i++)
        {
            string tmp = "";
            if(isalpha(s[i])) st.push(tmp + s[i]);
            else
            {
                tmp += st.top();
                st.pop();
                tmp = s[i] + st.top() + tmp;
                st.pop();
                st.push(tmp); 
            }
        } 
        while(st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
    return 0;
}