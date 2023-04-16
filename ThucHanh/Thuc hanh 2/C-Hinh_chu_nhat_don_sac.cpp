#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

ll solve(ll a[], int m, int n)
{
    ll l[n], r[n];
    stack<int> st1, st2;
    st1.push(n - 1);
    for(int i = n - 1; i >= 0; i--)
    {
        while(!st1.empty() && a[i] <= a[st1.top()]) st1.pop();
        if(!st1.empty()) r[i] = st1.top() - 1;
        else r[i] = n - 1; 
        st1.push(i);
    }
    for(int i = 0; i < n; i++)
    {
        while(!st2.empty() && a[i] <= a[st2.top()]) st2.pop();
        if(!st2.empty()) l[i] = st2.top() + 1;
        else l[i] = 0;
        st2.push(i);
    }
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = max(ans, a[i] * (r[i] - l[i] + 1));
    }
    return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    ll m, n;
    cin >> m >> n;
    ll a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = m - a[i];
    }
    cout << max(solve(a, m, n), solve(b, m, n));
    return 0;
}