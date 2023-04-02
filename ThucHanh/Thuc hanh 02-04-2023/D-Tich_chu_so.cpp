#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long p;
        cin >> p;
        if(p == 1) cout << 1;
        else
        {
            stack<int> st;
            for(int i = 9; i > 1; i--)
            {
                while (p % i == 0)
                {
                    st.push(i);
                    p /= i;
                }
            }
            if(p != 1) cout << -1;
            else
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