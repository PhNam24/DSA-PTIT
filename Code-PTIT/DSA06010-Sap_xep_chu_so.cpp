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
        while(n--)
        {
            string ss;
            cin >> ss;
            for ( char i : ss )
            {
                s.insert(i - '0');
            }
        }
        for ( int i : s ) cout << i << " ";
        cout << endl;
    }
    return 0;
}