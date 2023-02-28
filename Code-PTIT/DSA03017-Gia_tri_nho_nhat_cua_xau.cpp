#include <bits/stdc++.h>
#define ll long long
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

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
        map<char, int> m;
        for ( char i : s ) m[i]++;
        priority_queue<int> pq;
        for (auto i : m) pq.push(i.second);
        while(k--)
        {
            int tmp = pq.top();
            tmp--;
            pq.pop();
            pq.push(tmp);
        }
        int ans = 0;
        while(!pq.empty())
        {
            ans += pq.top() * pq.top();
            pq.pop();
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}