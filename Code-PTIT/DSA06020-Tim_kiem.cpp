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
        int n, x;
        cin >> n >> x;
        int a[n];
        nhap(a);
        int check = -1;
        for(int i : a)
        {
            if (i == x)
            {
                check = 1;
                break;
            }
        }
        cout << check;
        cout << endl;
    }
    return 0;
}