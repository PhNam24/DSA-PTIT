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
        int stt;
        string s;
        cin >> stt >> s;
        int idx = s.size() - 2;
        while(idx >= 0 && s[idx] >= s[idx + 1]) idx--;
        if(idx < 0) 
        {
            cout << stt << " BIGGEST" << endl;
            continue;
        }
        int tmp = s.size() - 1;
        while(s[tmp] <= s[idx]) tmp--;
        swap(s[tmp], s[idx]);
        sort(s.begin() + idx + 1, s.end());
        cout << stt << " " << s;
        cout << endl;
    }
    return 0;
}