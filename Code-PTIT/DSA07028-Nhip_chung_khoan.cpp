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
        int ans[n];
        stack<int> st;
        ans[0] = 1;
        st.push(0);
        for(int i = 1; i < n; i++)
        {
            while(st.size() && a[i] >= a[st.top()]) st.pop();
            if(st.size()) ans[i] = i - st.top();
            else ans[i] = i + 1;
            st.push(i);
        }
        for(int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}