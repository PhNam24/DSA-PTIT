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
        int a[n], res[n];
        nhap(a);
        stack<int> st;
        for(int i = 0; i < n; i++)
        {
            if(st.empty()) st.push(i);
            else
            {
                while(!st.empty() && a[st.top()] < a[i])
                {
                    res[st.top()] = a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        while (!st.empty())
        {
            res[st.top()] = -1;
            st.pop();
        } 
        for(int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}