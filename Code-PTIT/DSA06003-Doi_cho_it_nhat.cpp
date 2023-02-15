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
        nhap(a);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int min = a[i], idx = 0;
            for(int j = i + 1; j < n; j++)
            {
                if ( a[j] < min )
                {
                    min = a[j];
                    idx = j;
                }
            }
            if ( a[i] > min )
            {
                swap(a[idx], a[i]);
                cnt++;
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}