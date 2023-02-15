#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
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
        pair<int, int> a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a, a + n, cmp);
        int cnt = 0, pos = 0;
        for(int i = 0; i < n; i++)
        {
            if(pos <= a[i].first)
            {
                cnt++; 
                pos = a[i].second;
            }
        }
        cout << cnt;
        cout << endl;
    }   
    return 0;
}