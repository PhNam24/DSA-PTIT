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
        int n;
        cin >> n;
        stack<int> st;
        int d = n / 7, cnt7 = 0, cnt4 = 0;
        for(int i = 1; i <= d; i++)
        {
            if((n - i * 7) % 4 == 0)
            {
                cnt7 = i;
                cnt4 = (n - i * 7) / 4;
            } 
        }
        if(cnt7 == 0) cout << -1;
        else 
        {
            for(int i = 0; i < cnt4; i++) cout << 4;
            for(int i = 0; i < cnt7; i++) cout << 7;
        }
        cout << endl;
    }
    return 0;
}