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
        ll a[n];
        vector<ll> res;
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        stack<ll> st;
        int i = 0;
        for (; i < n; i++)
        { 
            if (st.empty() || a[st.top()] <= a[i])
            {
                st.push(i);
            }
            else 
            {
                int idx = st.top();
                st.pop();
                if (st.empty()) res.push_back(i * a[idx]);
                else res.push_back((i - st.top() - 1) * a[idx]);
                i--;
            }
        } 
        while (!st.empty())
        {
            int idx = st.top();
            st.pop();
            if (st.empty()) res.push_back(i * a[idx]);
            else res.push_back((i - st.top() - 1) * a[idx]);
        }
        sort(res.begin() , res.end());
        cout << res[res.size() - 1];
        cout << endl;
    }
    return 0;
}