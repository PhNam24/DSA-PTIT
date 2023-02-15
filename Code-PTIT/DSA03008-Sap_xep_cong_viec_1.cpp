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
        int tmp;
        for(int i = 0; i < n; i++)
        {
            cin >> tmp;
            a[i].first = tmp;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> tmp;
            a[i].second = tmp;
        }
        sort(a, a + n, cmp);
        int cnt = 1, time = a[0].second;
        for(int i = 1; i < n; i++)
        {
            if(a[i].first >= time) 
            { 
                cnt++;
                time = a[i].second;
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}