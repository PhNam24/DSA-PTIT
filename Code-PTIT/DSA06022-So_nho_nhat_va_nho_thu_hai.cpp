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
        set<int> s;
        int a[n];
        for(int &i : a) 
        {
            cin >> i;
            s.insert(i);
        }
        if ( s.size() < 2 ) cout << -1;
        else
        {
            n = 0;
            for(int i : s) 
            {
                if (n == 2) break;
                cout << i << " ";
                n++;
            }
        }
        cout << endl;
    }
    return 0;
}