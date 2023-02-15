#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;   
        priority_queue<int, vector<int>, greater<int>> pq;
        while(n--)
        {
            int tmp;
            cin >> tmp;
            pq.push(tmp);
        }
        ll ans = 0;
        while(pq.size() > 1)
        {
            int tmp = 0;
            tmp += pq.top();
            pq.pop();
            tmp += pq.top();
            pq.pop();
            ans += tmp;
            pq.push(tmp);
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}