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
    test
    {
        int n;
        cin >> n;
        ll a[n];
        ll tmp;
        for(int i = 0; i < n; i++)
        {
            cin >> tmp;
            a[i] = tmp * tmp;
        }
        sort(a, a + n);
        string s = "NO";
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if (binary_search(a, a + n, a[i] + a[j])) 
                {
                    check = 1;
                    s = "YES";
                    break;
                }
            }
            if(check) break;
        }
        cout << s;
        cout << endl;
    }
    return 0;
}