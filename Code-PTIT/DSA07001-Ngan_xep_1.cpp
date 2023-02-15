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
    while(cin >> s)
    {
        if(s != "show")
        {
            if(s == "push") cin >> x, st.push(x);
            if(s == "pop") if(!st.empty()) st.pop();
        }
        else 
        {
            if(st.empty()) cout << "empty";
            vector<int> v;
            while(!st.empty())
            {
                v.push_back(st.top());
                st.pop();
            }
            for(int i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i] << " ";
            }
            for(int i = v.size() - 1; i >= 0; i--)
            {
                st.push(v[i]);
            }
            cout << endl;
        }
    }
    return 0;
}