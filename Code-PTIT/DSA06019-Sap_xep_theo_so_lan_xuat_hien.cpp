#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if ( a.second != b.second ) return a.second > b.second;
    return a.first < b.first;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        int d[100005] = {};
        int m = -1e9;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            d[tmp]++;
            m = max(m, tmp);
        }
        vector<pair<int, int>> v;
        for (int i = 0; i <= m; i++)
        {
            if (d[i]) v.push_back({i, d[i]});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto i : v)
        {
            while(i.second--)
            {
                cout << i.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}