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
        int a[n];
        map<int, int> m;
        for(int &i : a)
        {
            cin >> i;
            m[i]++;
        }
        int check = 0;
        for(int i : a)
        {
            if (m[i] > 1) 
            {
                cout << i;
                check = 1;
                break;
            }
        }
        if (!check) cout << "NO";
        cout << endl;
    }
    return 0;
}