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
    stack<int> st;
    string s;
    int x;
    test
    {
        cin >> s;
        if(s == "PUSH")
        {
            cin >> x;
            st.push(x);
        }
        if(s == "POP") 
        {
            if(!st.empty()) st.pop();
        }
        if(s == "PRINT")
        {
            if(st.empty()) cout << "NONE";
            else cout << st.top();
            cout << endl;
        }
    }
    return 0;
}