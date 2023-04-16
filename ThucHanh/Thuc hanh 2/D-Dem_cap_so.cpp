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
    int n;
    cin >> n;
    int a[n + 5];
    stack<int> st;
    map<int, int> m;
    ll cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        while(!st.empty() && st.top() < a[i])
        {
            m[st.top()]--;
            st.pop();
            cnt++;
        }
        if(!st.empty())
        {
            if(a[i] == st.top())
            {
                cnt += m[a[i]];
                if(st.size() > m[a[i]]) cnt++;
            }
            else cnt++;
        }
        st.push(a[i]);
        m[a[i]]++;
    }
    cout << cnt;
    return 0;
}