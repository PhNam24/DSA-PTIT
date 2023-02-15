#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    test
    {
        int n, idx = 9, cnt = 0;
        cin >> n;
        while(n > 0)
        {
            if(n < a[idx]) idx--;
            else
            {
                n -= a[idx];
                cnt++;
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}