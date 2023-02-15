#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; cin.ignore(); while(t--)
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
        stack<string> st;
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s)
        {
            st.push(s);
        }
        while(!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}