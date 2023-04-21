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
        stack<char> st;
        string tmp;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ']') st.push(s[i]);
            else
            {
                tmp = "";
                while(st.size() && st.top() != '[')
                {
                    tmp += st.top();
                    st.pop();
                }
                if(st.size()) st.pop();
                string cnt;
                while(st.size() && isdigit(st.top()))
                {
                    cnt = st.top() + cnt;
                    st.pop();
                }
                if(cnt == "") cnt = "1";
                int d = stoi(cnt);
                string tmp2;
                for(int i = 0; i < d; i++)
                {
                    tmp2 += tmp;
                }
                for(int j = tmp2.size() - 1; j >= 0; j--)
                {
                    st.push(tmp2[j]);
                }
            }
        }
        string ans;
        while(st.size())
        {
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}