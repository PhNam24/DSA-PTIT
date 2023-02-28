#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second - a.first > b.second - b.first;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    pair<int, int> p[n];
    for(int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + n, cmp);
    int Min = 1e9, Max = -1e9;
    for(int i = 0; i < n; i++)
    {
        if(p[i].second - p[i].first != 1) Min = min(Min, p[i].second - p[i].first);
        Max = max(Max, p[i].second - p[i].first);
    }
    int cnt = 0, cntMin = 0, cntMax = 0;
    for(int i = 0; i < n; i++)
    {
        int tmp = p[i].second - p[i].first;
        if(tmp == Max) cntMax++;
        else if(tmp == Min) cntMin++;
        else cnt++;
    }
    cout << cntMin * y + cnt * x + cntMax * z;
    return 0;
}