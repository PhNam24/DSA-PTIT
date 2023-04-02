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
        for(int i = s.size() - 1; i >= 0; i--)
        {
        	string tmp = "";
        	if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        	{
        		tmp = '(' + st.top();
        		st.pop();
        		tmp = tmp + s[i] + st.top() + ')';
        		st.pop();
        		st.push(tmp);
			}
			else st.push(tmp + s[i]);
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
