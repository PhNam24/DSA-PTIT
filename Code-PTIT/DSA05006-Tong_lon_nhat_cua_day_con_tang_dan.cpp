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
        int n;
        cin >> n;
        int a[n];
        nhap(a);
        int tang[n] = {};
        tang[0] = a[0];
        int ans = -1e9;
        for(int i = 0; i < n; i++)
        {
            tang[i] = a[i];
            for(int j = 0; j < i; j++)
            {
                if(a[i] > a[j]) tang[i] = max(tang[i], tang[j] + a[i]); 
            }
            ans = max(ans, tang[i]);
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}