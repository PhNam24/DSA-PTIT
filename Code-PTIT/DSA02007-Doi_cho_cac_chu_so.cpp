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
        string s;
        int k;
        cin >> k >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(k <= 0) break;
            int idx = i;
            for(int j = s.size() - 1; j > i; j--)
            {
                if(s[j] > s[idx]) idx = j;
            }
            if(s[i] != s[idx]) 
            {
                swap(s[i], s[idx]);
                k--;
            }
        }
        cout << s;
        cout << endl;
    }
    return 0;
}