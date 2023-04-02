#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

int main()
{
    fast
        test
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<int> st;
        int res[n];
        int idx[n];
        for (int i = 0; i < n; i++)
        {
            if (st.empty()) st.push(i);
            else
            {
                while (!st.empty() && a[st.top()] < a[i])
                {
                    res[st.top()] = a[i];
                    idx[st.top()] = i;
                    st.pop();
                }
                st.push(i);
            }
        }
        while (!st.empty())
        {
            res[st.top()] = -1;
            idx[st.top()] = -1;
            st.pop();
        }
        int ans[n];
        for (int i = 0; i < n; i++)
        {
            if (res[i] == -1)
                ans[i] = -1;
            else
            {
                if (st.empty()) st.push(i);   
                else
                {
                    while (!st.empty() && a[st.top()] < res[i] && st.top() > idx[i])
                    {
                        ans[st.top()] = a[i];
                        st.pop();
                    }
                    st.push(i);
                }
            }
        }
        while (!st.empty())
        {
            ans[st.top()] = -1;
            st.pop();
        }
        for (int i : ans)
            cout << i << " ";
        cout << '\n';
    }
    return 0;
}