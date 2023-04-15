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
        int k;
        string s;
        cin >> k >> s;
        int d[257] = {};
        for(auto i : s) d[i]++;
        priority_queue<ll> pq;
        for(int i = 0; i < 257; i++)
        {
            if(d[i]) pq.push(d[i]);
        }
        while(k--)
        {
            int tmp = pq.top();
            pq.pop();
            tmp--;
            pq.push(tmp);
        }
        ll ans = 0;
        while(pq.size())
        {
            ans += pq.top() * pq.top();
            pq.pop();
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}