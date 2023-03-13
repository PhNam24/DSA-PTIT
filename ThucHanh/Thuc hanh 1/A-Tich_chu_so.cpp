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
        ll p;
        cin >> p;
        if(p == 1) cout << 1;
        else
        {
            stack<int> st;
            for(int i = 9; i > 1; i--)
            {
                while(p % i == 0)
                {
                    st.push(i);
                    p /= i;
                }
            }
            if(p > 1) cout << -1;
            else 
            {
                while(st.size())
                {
                    cout << st.top();
                    st.pop();
                }
            }
        }
        cout << endl;
    }
    return 0;
}