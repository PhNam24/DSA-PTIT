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
        int d;
        string s;
        cin >> d >> s;
        int Max = -1e9, cnt[257] = {};
        for(char i : s)
        {
            cnt[i]++;
            Max = max(Max, cnt[i]);
        }
        if ((Max - 1) * (d - 1) + Max > s.size()) cout << -1;
        else cout << 1;
        cout << endl;
    }
    return 0;
}

