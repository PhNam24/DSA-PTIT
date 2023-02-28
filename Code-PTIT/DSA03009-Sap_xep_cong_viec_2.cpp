#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

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
        pair<int, int> p[n];
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> p[i].first >> p[i].first >> p[i].second;
        }
        sort(p, p + n, cmp);
        int ans = 0;
        int d[1005] = {};
        for(int i = 0; i < n; i++)
        {
            while(d[p[i].first] && p[i].first) p[i].first--;
            if(!d[p[i].first] && p[i].first)
            {
                ans += p[i].second;
                cnt++;
                d[p[i].first] = 1;
            }
        }
        cout << cnt << " " << ans << endl;
    }
    return 0;
}