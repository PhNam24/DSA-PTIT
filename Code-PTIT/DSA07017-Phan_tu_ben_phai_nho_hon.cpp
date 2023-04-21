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
        int n;
        cin >> n;
        int a[n];
        nhap(a);
        stack<int> st;
        st.push(n - 1);
        int res[n], ans[n];
        res[n - 1] = -1;
        for(int i = n - 2; i >= 0; i--)
        {
            if(st.size() && a[i] < a[st.top()])
            {
                res[i] = st.top();
                st.push(i);
            }
            else
            {
                while(st.size() && a[i] >= a[st.top()]) st.pop();
                if(st.size()) res[i] = st.top();
                else res[i] = -1;
                st.push(i);
            }
        }
        st = {};
        ans[n - 1] = -1;
        st.push(n - 1);
        for(int i = n - 2; i >= 0; i--)
        {
            if(st.size() && a[i] > a[st.top()])
            {
                ans[i] = st.top();
                st.push(i);
            }
            else
            {
                while(st.size() && a[i] <= a[st.top()]) st.pop();
                if(st.size()) ans[i] = st.top();
                else ans[i] = -1;
                st.push(i);
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(ans[res[i]] != -1 && res[i] != -1) cout << a[ans[res[i]]] << " ";
            else cout << -1 << " ";
        }
        cout << endl;
    }
    return 0;
}