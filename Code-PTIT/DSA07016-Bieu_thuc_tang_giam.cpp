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
        stack<int> st;
        string ans;
        for(int i = 0; i <= s.size(); i++)
        {
            st.push(i + 1);
            if(i == s.size() || s[i] == 'I')
            {
                while(st.size())
                {
                    ans.push_back(st.top() + '0');
                    st.pop();
                }
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}