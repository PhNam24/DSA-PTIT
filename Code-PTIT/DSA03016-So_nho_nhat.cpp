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
        int s, d;
        cin >> s >> d;
        if(s == 0 && d == 1) cout << 0;
        else if(s == 0 || s > d * 9) cout << -1;
        else
        {
            stack<int> st;
            s--;
            while(d--)
            {
                if(s >= 9)
                {
                    st.push(9);
                    s -= 9;
                }
                else if (s > 0)
                {
                    st.push(s);
                    s = 0;
                }
                else st.push(0);
            }   
            cout << st.top() + 1;
            st.pop();
            while(st.size())
            {
                cout << st.top();
                st.pop();
            }
        }
        cout << endl;
    }
    return 0;
}