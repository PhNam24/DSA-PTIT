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
        stack<int > st;
        for(int i = s.size() - 1; i >= 0; i--)
        {
        	if(isdigit(s[i])) st.push(s[i] - '0');
        	else
        	{
        		int tmp = st.top();
        		st.pop();
        		if(s[i] == '*') tmp *= st.top();
        		if(s[i] == '/') tmp /= st.top();
        		if(s[i] == '+') tmp += st.top();
        		if(s[i] == '-') tmp -= st.top();
        		st.pop();
        		st.push(tmp);
			}
		}
		cout << st.top();
        cout << endl;
    }
    return 0;
}
