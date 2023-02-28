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
    int n, s;
    cin >> n >> s;
    if(s == 0 || n * 9 < s) cout << "-1 -1";
    else
    {
        int s1 = s;
        s--;
        stack<int> st;
        int m = n;
        while(n--)
        {
            if(s >= 9) 
            {
                st.push(9);
                s -= 9;
            }
            else if(s > 0)
            {
                st .push(s);
                s = 0;
            }
            else st.push(0);
        }
        st.top()++;
        while (st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << " ";
        queue<int> q;
        while(s1 != 0)
        {
            if(s1 >= 9)
            {
                q.push(9);
                s1 -= 9;
            }
            else 
            {
                q.push(s1);
                s1 = 0;
            }
        }
        while(q.size() < m) q.push(0);
        while(q.size())
        {
            cout << q.front();
            q.pop();
        }
    }
    return 0;
}