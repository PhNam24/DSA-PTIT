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
        int a[n], l[n], r[n];
        nhap(a);
        stack<int> st;
        l[0] = 1;
        for(int i = 0; i < n; i++)
        {
            while(st.size() && a[i] <= a[st.top()]) st.pop();
            if(st.size()) l[i] = st.top() + 1;
            else l[i] = 0;
            st.push(i);
        }
        st = {};
        for(int i = n - 1; i >= 0; i--)
        {
            while(st.size() && a[i] <= a[st.top()]) st.pop();
            if(st.size()) r[i] = st.top() - 1;
            else r[i] = n - 1;
            st.push(i);
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(r[i] - l[i] + 1 >= a[i]) ans = max(ans, a[i]);
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}