#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int ut(char c)
{
	if(c == '(') return 0;
	if(c == '+' || c == '-') return 1;
	if(c == '*' || c == '/') return 2;
	return 3;
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
        stack<char> st;
        string res;
        for(int i = 0; i < s.size(); i++)
        {
        	if(isalpha(s[i])) res.push_back(s[i]);
        	else
        	{
        		if(s[i] == '(') st.push(s[i]);
        		else
        		{
        			if(s[i] == ')')
        			{
        				while(st.top() != '(')
        				{
        					res.push_back(st.top());
        					st.pop();
						}
						st.pop();
					}
					else
					{
						while(st.size() && ut(s[i]) <= ut(st.top()))
						{
							res.push_back(st.top());
							st.pop();
						}
						st.push(s[i]);
					}
				}
			}
		}
		while(st.size())
		{
			if(st.top() != '(') res.push_back(st.top());
			st.pop();
		}
		cout << res;
        cout << endl;
    }
    return 0;
}
