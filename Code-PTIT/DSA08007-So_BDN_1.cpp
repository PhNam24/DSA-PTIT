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
        ll n;
        cin >> n;
        queue<string> q;
        q.push("1");
        ll cnt = 0;
        if(1 < n) cnt++;
        while(1)
        {
            string tmp = q.front();
            q.pop();
            if(stoll(tmp + '0') <= n) cnt++;
            else break;
            if(stoll(tmp + '1') <= n) cnt++;
            else break;
            q.push(tmp + '0');
            q.push(tmp + '1');
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}