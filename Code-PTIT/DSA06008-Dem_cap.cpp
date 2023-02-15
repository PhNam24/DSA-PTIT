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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        nhap(a);
        nhap(b);
        int cnt = 0;
        for(int i : a)
        {
            for(int j : b)
            {
                if(j * log(i) > i * log(j)) cnt++;
            }
        }  
        cout << cnt;
        cout << endl;
    }
    return 0;
}